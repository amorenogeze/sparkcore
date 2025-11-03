/*
 * STSPIN958.cpp
 *
 *  Created on: Nov 3, 2025
 *      Author: abelm
 */

#include "STSPIN958.hpp"


void STSPIN958::Init()
{

}


bool STSPIN958::Enable()
{
	HAL_GPIO_WritePin(STSPIN958_ENABLE_GPIO_Port, STSPIN958_ENABLE_Pin, GPIO_PIN_SET);
	return true;
}

bool STSPIN958::Disable()
{
	HAL_GPIO_WritePin(STSPIN958_ENABLE_GPIO_Port, STSPIN958_ENABLE_Pin, GPIO_PIN_RESET);
	return true;
}

bool STSPIN958::SetFrequency(uint32_t Frequency)
{
    if (Frequency <= 0.0f)
        return false;

    // Get timer clock
    RCC_ClkInitTypeDef clkconfig;
    uint32_t pFLatency;
    HAL_RCC_GetClockConfig(&clkconfig, &pFLatency);

    uint32_t pclk1 = HAL_RCC_GetPCLK1Freq();
    uint32_t tim_clk = (clkconfig.APB1CLKDivider != RCC_HCLK_DIV1) ? 2 * pclk1 : pclk1;

    // Find prescaler and ARR
    uint32_t prescaler = 0;
    uint32_t arr = 0;

    for (prescaler = 0; prescaler < 0xFFFF; prescaler++)
    {
        arr = static_cast<uint32_t>((float)tim_clk / ((prescaler + 1) * Frequency)) - 1;
        if (arr <= 0xFFFF)
            break;
    }

    if (arr > 0xFFFF)
        return false; // frequency too low

    // Stop PWM
    HAL_TIM_PWM_Stop(m_timer, m_channel);

    __HAL_TIM_DISABLE(m_timer);

    m_timer->Instance->PSC = prescaler;
    m_timer->Instance->ARR = arr;

    __HAL_TIM_SET_COUNTER(m_timer, 0);
    __HAL_TIM_ENABLE(m_timer);

    // Restart PWM
    HAL_TIM_PWM_Start(m_timer, m_channel);

    return true;
}

bool STSPIN958::SetDutycycleClockWise(float duty_percent)
{
	HAL_GPIO_WritePin(STSPIN958_PH_GPIO_Port, STSPIN958_PH_Pin, GPIO_PIN_SET);

    // Clamp value to [0.0, 100.0] to avoid invalid CCR
	float duty_percent_clamped = duty_percent;
	if (duty_percent_clamped < 0.0f) duty_percent_clamped = 0.0f;
	if (duty_percent_clamped > 100.0f) duty_percent_clamped = 100.0f;

    // Calculate CCR value
    uint32_t arr = m_timer->Instance->ARR;
    uint32_t ccr = static_cast<uint32_t>((duty_percent / 100.0f) * (arr + 1));

    // Set compare register for the channel
    switch (m_channel)
    {
    case TIM_CHANNEL_1: __HAL_TIM_SET_COMPARE(m_timer, TIM_CHANNEL_1, ccr); break;
    case TIM_CHANNEL_2: __HAL_TIM_SET_COMPARE(m_timer, TIM_CHANNEL_2, ccr); break;
    case TIM_CHANNEL_3: __HAL_TIM_SET_COMPARE(m_timer, TIM_CHANNEL_3, ccr); break;
    case TIM_CHANNEL_4: __HAL_TIM_SET_COMPARE(m_timer, TIM_CHANNEL_4, ccr); break;
    default: break; // Invalid channel
    }

	return true;
}

bool STSPIN958::SetDutycycleCounterClockWise(float duty_percent)
{
	HAL_GPIO_WritePin(STSPIN958_PH_GPIO_Port, STSPIN958_PH_Pin, GPIO_PIN_RESET);

    // Clamp value to [0.0, 100.0] to avoid invalid CCR
	float duty_percent_clamped = duty_percent;
	if (duty_percent_clamped < 0.0f) duty_percent_clamped = 0.0f;
	if (duty_percent_clamped > 100.0f) duty_percent_clamped = 100.0f;

    // Calculate CCR value
    uint32_t arr = m_timer->Instance->ARR;
    uint32_t ccr = static_cast<uint32_t>((duty_percent / 100.0f) * (arr + 1));

    // Set compare register for the channel
    switch (m_channel)
    {
    case TIM_CHANNEL_1: __HAL_TIM_SET_COMPARE(m_timer, TIM_CHANNEL_1, ccr); break;
    case TIM_CHANNEL_2: __HAL_TIM_SET_COMPARE(m_timer, TIM_CHANNEL_2, ccr); break;
    case TIM_CHANNEL_3: __HAL_TIM_SET_COMPARE(m_timer, TIM_CHANNEL_3, ccr); break;
    case TIM_CHANNEL_4: __HAL_TIM_SET_COMPARE(m_timer, TIM_CHANNEL_4, ccr); break;
    default: break; // Invalid channel
    }

	return true;
}
