/*
 * app_context.hpp
 *
 *  Created on: Nov 4, 2025
 *      Author: abelm
 */

#ifndef INC_APP_CONTEXT_HPP_
#define INC_APP_CONTEXT_HPP_

#ifdef __cplusplus
extern "C" {
#endif

	#include "stm32f1xx_hal.h"

#ifdef __cplusplus
}
#endif


typedef struct {
    ADC_HandleTypeDef* hadc;
    TIM_HandleTypeDef* htim_pwm;
    DMA_HandleTypeDef* hdma_adc;
    UART_HandleTypeDef* huart;
} AppContext_t;



#endif /* INC_APP_CONTEXT_HPP_ */
