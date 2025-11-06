/*
 * CurrentMeter.hpp
 *
 *  Created on: Nov 5, 2025
 *      Author: abel
 */

#ifndef INC_CURRENTMETER_HPP_
#define INC_CURRENTMETER_HPP_
#include "ICurrentMeter.hpp"
#include "stm32f1xx_hal.h"

class CurrentMeter : public ICurrentMeter{
public:
	CurrentMeter(TIM_HandleTypeDef* timer, uint32_t pwm_channel, uint32_t adc_trigger_channel);
	~CurrentMeter();
	void Init();
	void ADCCenterAlignSampling();
	void SetADCData(uint16_t*, uint8_t);
	void SetCallback(Callback);
private:
    TIM_HandleTypeDef* m_timer;
    uint32_t m_pwm_channel;
    uint32_t m_adc_trigger_channel;
};

#endif /* INC_CURRENTMETER_HPP_ */
