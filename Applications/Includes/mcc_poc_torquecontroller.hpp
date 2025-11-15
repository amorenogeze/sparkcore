/***********************************************************************************
 * @file        mcc_poc_torquecontroller.hpp
 * @author      a.moreno@geze.com
 * @brief       Application to characterize the Sparkcore torque controller.
 *
 * @details
 *
 *
 * @date        <2025-11-14>
 ***********************************************************************************/

#ifndef DEMOS_MCC_POC_TORQUECONTROLLER_MCC_POC_TORQUECONTROLLER_HPP_
#define DEMOS_MCC_POC_TORQUECONTROLLER_MCC_POC_TORQUECONTROLLER_HPP_
#include "stm32f4xx_hal.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void* MCCHandle;

// C wrapper functions
MCCHandle mcc_poc_torquecontroller_Create(void);
void mcc_poc_torquecontroller_Destroy(MCCHandle handle);
void mcc_poc_torquecontroller_SetContext(MCCHandle handle, void* context);
void mcc_poc_torquecontroller_Start(MCCHandle handle);       // starts the internal loop

#ifdef __cplusplus
}
#endif





#ifdef __cplusplus
#include "CurrentMeter1_AMuster.hpp"
#include "HBridge_AMuster.hpp"
class mcc_poc_torquecontroller {
public:
	mcc_poc_torquecontroller(){}
	~mcc_poc_torquecontroller(){}

private:
};


#endif  // __cplusplus

#endif /* DEMOS_MCC_POC_TORQUECONTROLLER_MCC_POC_TORQUECONTROLLER_HPP_ */
