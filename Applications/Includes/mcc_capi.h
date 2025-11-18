/***********************************************************************************
 * @file        mcc_capi.hpp
 * @author      a.moreno@geze.com
 * @brief       Common mcc application c wrapper api.
 *
 * @details
 *
 *
 * @date        <2025-11-14>
 ***********************************************************************************/
#ifndef INCLUDES_MCC_CAPI_H_
#define INCLUDES_MCC_CAPI_H_

#if defined(STM32F4xx)
    #include "stm32f4xx_hal.h"
#elif defined(STM32F1xx)
    #include "stm32f1xx_hal.h"
#elif defined(STM32G4xx)
    #include "stm32g4xx_hal.h"
#elif defined(STM32L451xx)
	#include "stm32l4xx_hal.h"
#else
    #error "Unsupported STM32 family"
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef void* MccHandle;  // opaque handle for C


typedef enum {
	MCC_POC_TORQUECONTROLLER,
	MCC_MAX
} MccType;

// Generic API functions
MccHandle Mcc_Create(MccType type);
void Mcc_Destroy(MccHandle handle);
void Mcc_SetContext(MccHandle handle, void* ctx);
void Mcc_Run(MccHandle handle);

#ifdef __cplusplus
}
#endif

#endif /* INCLUDES_MCC_CAPI_H_ */
