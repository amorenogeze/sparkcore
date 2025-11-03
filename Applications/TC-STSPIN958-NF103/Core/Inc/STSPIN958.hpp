/*
 * STSPIN958.hpp
 *
 *  Created on: Nov 3, 2025
 *      Author: abelm
 */

#ifndef SRC_STSPIN958_STSPIN958_HPP_
#define SRC_STSPIN958_STSPIN958_HPP_

#include "IHbridge.hpp"
#include "stm32f1xx_hal.h"
#include "main.h"

class STSPIN958: public IHbridge {
public:
	STSPIN958(){}
	~STSPIN958(){}

	void Init();
	bool Enable();
	bool Disable();
	bool SetDutycycleClockWise(float);
	bool SetDutycycleCounterClockWise(float);

	bool SetFrequency(uint32_t);

private:
    TIM_HandleTypeDef* m_timer;
    uint32_t m_channel;
};

#endif /* SRC_STSPIN958_STSPIN958_HPP_ */
