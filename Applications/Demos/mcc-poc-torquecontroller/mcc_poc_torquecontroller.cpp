/***********************************************************************************
 * @file        mcc_poc_torquecontroller.cpp
 * @author      a.moreno@geze.com
 * @brief       Application to characterize the Sparkcore torque controller.
 *
 * @details
 *
 *
 * @date        <2025-11-14>
 ***********************************************************************************/

#ifndef DEMOS_MCC_POC_TORQUECONTROLLER_APP_MAIN_CPP_
#define DEMOS_MCC_POC_TORQUECONTROLLER_APP_MAIN_CPP_
#include "mcc_poc_torquecontroller.hpp"


extern "C" MCCHandle mcc_poc_torquecontroller_Create(void) {
    return new mcc_poc_torquecontroller();
}

extern "C" void mcc_poc_torquecontroller_Destroy(MCCHandle handle) {
    delete static_cast<mcc_poc_torquecontroller*>(handle);
}

extern "C" void mcc_poc_torquecontroller_SetContext(MCCHandle handle, void* ctx) {
	mcc_poc_torquecontroller* obj = static_cast<mcc_poc_torquecontroller*>(handle);
    //obj->setContext(ctx);
}

extern "C" void mcc_poc_torquecontroller_Start(MCCHandle handle) {
	mcc_poc_torquecontroller* obj = static_cast<mcc_poc_torquecontroller*>(handle);
    //obj->startLoop();  // enters the loop
}


#endif /* DEMOS_MCC_POC_TORQUECONTROLLER_APP_MAIN_CPP_ */
