/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MCC_BOOST_ENABLE_Pin GPIO_PIN_13
#define MCC_BOOST_ENABLE_GPIO_Port GPIOC
#define MCC_BOOST_TEST_Pin GPIO_PIN_14
#define MCC_BOOST_TEST_GPIO_Port GPIOC
#define MCC_3V3_SWITCH_Pin GPIO_PIN_15
#define MCC_3V3_SWITCH_GPIO_Port GPIOC
#define MCC_MOT_CURRENT1_Pin GPIO_PIN_0
#define MCC_MOT_CURRENT1_GPIO_Port GPIOC
#define MCC_36V_VOLTAGE_Pin GPIO_PIN_1
#define MCC_36V_VOLTAGE_GPIO_Port GPIOC
#define MCC_MOTOR_VOLTAGE_Pin GPIO_PIN_2
#define MCC_MOTOR_VOLTAGE_GPIO_Port GPIOC
#define MCC_SWITCH_VOLTAGE_Pin GPIO_PIN_3
#define MCC_SWITCH_VOLTAGE_GPIO_Port GPIOC
#define MCC_MOT_CURRENT1A0_Pin GPIO_PIN_0
#define MCC_MOT_CURRENT1A0_GPIO_Port GPIOA
#define MCC_MOT_CURRENT2_Pin GPIO_PIN_1
#define MCC_MOT_CURRENT2_GPIO_Port GPIOA
#define MCC_MOT1_VOLTAGE_Pin GPIO_PIN_2
#define MCC_MOT1_VOLTAGE_GPIO_Port GPIOA
#define MCC_MOT2_VOLTAGE_Pin GPIO_PIN_3
#define MCC_MOT2_VOLTAGE_GPIO_Port GPIOA
#define MCC_BUCK_OUT_VOLTAGE_Pin GPIO_PIN_4
#define MCC_BUCK_OUT_VOLTAGE_GPIO_Port GPIOA
#define MCC_BOOST_OUT_VOLTAGE_Pin GPIO_PIN_5
#define MCC_BOOST_OUT_VOLTAGE_GPIO_Port GPIOA
#define MCC_BOOST_IN_VOLTAGE_Pin GPIO_PIN_6
#define MCC_BOOST_IN_VOLTAGE_GPIO_Port GPIOA
#define MCC_IN1_Pin GPIO_PIN_7
#define MCC_IN1_GPIO_Port GPIOA
#define MCC_CAP_VOLTAGE_Pin GPIO_PIN_4
#define MCC_CAP_VOLTAGE_GPIO_Port GPIOC
#define MCC_5V_VOLTAGE_Pin GPIO_PIN_5
#define MCC_5V_VOLTAGE_GPIO_Port GPIOC
#define MCC_IN2_Pin GPIO_PIN_0
#define MCC_IN2_GPIO_Port GPIOB
#define MCC_CAP_CHARGE_Pin GPIO_PIN_1
#define MCC_CAP_CHARGE_GPIO_Port GPIOB
#define MCC_OUT_Pin GPIO_PIN_2
#define MCC_OUT_GPIO_Port GPIOB
#define MCC_HALLSENS_INT_Pin GPIO_PIN_12
#define MCC_HALLSENS_INT_GPIO_Port GPIOB
#define MCC_LED_Pin GPIO_PIN_15
#define MCC_LED_GPIO_Port GPIOB
#define MCC_INCA_Pin GPIO_PIN_6
#define MCC_INCA_GPIO_Port GPIOC
#define MCC_INCB_Pin GPIO_PIN_7
#define MCC_INCB_GPIO_Port GPIOC
#define MCC_WDGOFF_Pin GPIO_PIN_8
#define MCC_WDGOFF_GPIO_Port GPIOC
#define MCC_TRIGGER_Pin GPIO_PIN_9
#define MCC_TRIGGER_GPIO_Port GPIOC
#define MCC_SWITCH_CONTROL_Pin GPIO_PIN_10
#define MCC_SWITCH_CONTROL_GPIO_Port GPIOA
#define MCC_MB_SWITCH_Pin GPIO_PIN_11
#define MCC_MB_SWITCH_GPIO_Port GPIOA
#define MCC_INC_PUSH_Pin GPIO_PIN_12
#define MCC_INC_PUSH_GPIO_Port GPIOA
#define MCC_RS485_EN_Pin GPIO_PIN_12
#define MCC_RS485_EN_GPIO_Port GPIOC
#define MCC_CAN_ENABLE_Pin GPIO_PIN_2
#define MCC_CAN_ENABLE_GPIO_Port GPIOD
#define MCC_BUCK_EN_Pin GPIO_PIN_5
#define MCC_BUCK_EN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
