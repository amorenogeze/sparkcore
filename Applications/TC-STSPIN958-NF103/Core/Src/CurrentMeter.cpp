/*
 * CurrentMeter.cpp
 *
 *  Created on: Nov 5, 2025
 *      Author: abel
 */
#include "CurrentMeter.hpp"


	CurrentMeter::CurrentMeter(TIM_HandleTypeDef* timer, uint32_t pwm_channel, uint32_t adc_trigger_channel)
	{

	}
	CurrentMeter::~CurrentMeter(){}
	void Init(){}
	void CenterAlignSampling(){}
	void InterruptHandler(uint16_t*, uint8_t){}
	void DataReadyCB(uint32_t){}
