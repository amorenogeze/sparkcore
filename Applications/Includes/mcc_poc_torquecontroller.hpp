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

#ifdef __cplusplus
extern "C" {
#endif


#include "mcc_capi.hpp"
#include "mcc_poc_torquecontroller.hpp"

#ifdef __cplusplus
}   // End of extern "C"
#endif

#ifdef __cplusplus

class mcc_poc_torquecontroller: public IMccAplication {
public:
	mcc_poc_torquecontroller(){}
	~mcc_poc_torquecontroller(){}

	void setContext(void* ctx);
	void run();
private:
	TIM_HandleTypeDef mBridgeTimer;

};
#endif  // __cplusplus

#endif /* DEMOS_MCC_POC_TORQUECONTROLLER_MCC_POC_TORQUECONTROLLER_HPP_ */
