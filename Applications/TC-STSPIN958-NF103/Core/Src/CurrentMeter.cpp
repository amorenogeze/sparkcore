/*
 * CurrentMeter.cpp
 *
 *  Created on: Nov 5, 2025
 *      Author: abel
 */
#include "CurrentMeter.hpp"


CurrentMeter::CurrentMeter(TIM_HandleTypeDef* timer, uint32_t pwm_channel, uint32_t adc_trigger_channel):
m_timer(timer),
m_pwm_channel(pwm_channel),
m_adc_trigger_channel(adc_trigger_channel)
{

}
CurrentMeter::~CurrentMeter(){}
void CurrentMeter::Init(){}
void CurrentMeter::ADCCenterAlignSampling(){}
void CurrentMeter::SetADCData(uint16_t*, uint8_t){}
void CurrentMeter::setCallback(Callback){}
