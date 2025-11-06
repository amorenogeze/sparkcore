/*
 * app_main.cpp
 *
 *  Created on: Nov 4, 2025
 *      Author: abelm
 */

#include "app_main.hpp"
#include "STSPIN958.hpp"
#include "CurrentMeter.hpp"

#include <math.h>
#include <stdint.h>

#define ADC_MAX        4095
#define APP_VREF           3.3f
#define OFFSET_V       0.0f
#define SHUNT_RES      0.05f
#define GAIN           10.0f

constexpr uint16_t TOTAL_SAMPLES = 1000;
constexpr uint16_t SAMPLES_PER_PULSE = 10;

static uint16_t adc_buffer[TOTAL_SAMPLES];

static volatile bool adc_data_ready = false;
static volatile uint16_t adc_latest_value = 0;  // This will be read in the while loop
static volatile float current = 0.0;
static volatile float voltage = 0.0;

static float ADC_ToVoltage(uint16_t adc_value);
static uint16_t ADC_ToMilliVolts(uint16_t adc_value);
float compute_rms_fixed(const uint16_t *samples, int n);
float compute_adc_rms_voltage(const uint16_t* samples, size_t n);
void convert_adc_to_voltage_buffer(const uint16_t* adc_samples, float* voltage_buffer, size_t n);

void app_main(AppContext_t *ctx)
{
    STSPIN958 bridge(ctx->htim_pwm, TIM_CHANNEL_2);

    HAL_TIM_PWM_Start(ctx->htim_pwm, TIM_CHANNEL_2);

    HAL_ADC_Start_DMA(ctx->hadc, reinterpret_cast<uint32_t*>(adc_buffer), TOTAL_SAMPLES);

    bridge.Enable();
    bridge.SetFrequency(10000);
    bridge.SetDutycycleClockWise(25.0);


    while (1)
    {
        if (adc_data_ready)
        {
            adc_data_ready = false;

        	current = compute_rms_fixed(adc_buffer, 50);
        	voltage = compute_adc_rms_voltage(adc_buffer, 50);

            // (Optional) restart DMA to keep collecting
            HAL_ADC_Start_DMA(ctx->hadc, reinterpret_cast<uint32_t*>(adc_buffer), TOTAL_SAMPLES);
        }
        //HAL_Delay(50);
    }
}

extern "C" void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
    if (hadc->Instance == ADC1)
    {
        // Signal the main loop that new data is ready
        adc_data_ready = true;
    }
}

static float ADC_ToVoltage(uint16_t adc_value)
{
    const float VREF = 3.3f;      // Reference voltage in volts
    const float ADC_RES = 4095.0f; // 12-bit resolution
    return (adc_value / ADC_RES) * VREF;
}

static uint16_t ADC_ToMilliVolts(uint16_t adc_value)
{
    const float VREF = 3.3f;
    const float ADC_RES = 4095.0f;
    return static_cast<uint16_t>((adc_value / ADC_RES) * (VREF * 1000.0f));
}

float compute_rms_fixed(const uint16_t *samples, int n)
{
    // Precompute constants (executed once)
    const float A_per_count = (APP_VREF / ADC_MAX) / (SHUNT_RES * GAIN); // A per ADC count
    const float offset_counts = (OFFSET_V / APP_VREF) * ADC_MAX;         // Midpoint offset

    int64_t sum_sq = 0;

    for (int i = 0; i < n; ++i)
    {
        int32_t diff = (int32_t)samples[i] - (int32_t)offset_counts; // signed difference
        sum_sq += (int64_t)diff * diff;
    }

    // RMS in ADC counts
    float rms_counts = sqrtf((float)sum_sq / n);

    // Convert to amperes
    float rms_current = rms_counts * A_per_count;

    return rms_current;
}

float compute_adc_rms_voltage(const uint16_t* samples, size_t n)
{
    if (n == 0) return 0.0f;

    double sum_sq = 0.0;

    for (size_t i = 0; i < n; ++i)
    {
        // Convert to voltage
        float v = (static_cast<float>(samples[i]) / ADC_MAX) * APP_VREF;
        sum_sq += v * v;
    }

    float rms = std::sqrt(sum_sq / n);
    return rms;
}

void convert_adc_to_voltage_buffer(const uint16_t* adc_samples, float* voltage_buffer, size_t n)
{
    const float scale = APP_VREF / static_cast<float>(ADC_MAX);

    for (size_t i = 0; i < n; ++i)
    {
        voltage_buffer[i] = static_cast<float>(adc_samples[i]) * scale;
    }
}
