/***********************************************************************************
 * @file        mcc_capi.cpp
 * @author      a.moreno@geze.com
 * @brief       Common mcc application c wrapper api.
 *
 * @details
 *
 *
 * @date        <2025-11-14>
 ***********************************************************************************/

#include "mcc_capi.hpp"
#include "mcc_poc_torquecontroller.hpp"
#include "mcc_sparkcore.hpp"
#include "mcc_sparkcore_emc.hpp"
#include <stdexcept>

struct MccWrapper {
    void* instance;
    MccType type;
};

extern "C" MccHandle Mcc_Create(MccType type) {
	MccWrapper* wrapper = new MccWrapper;
    wrapper->type = type;
    switch(type) {
        //case MCC_SPARKCORE:
            //wrapper->instance = new A();
            break;
        //case MCC_SPARKCORE_EMC:
            //wrapper->instance = new B();
            break;
        case MCC_POC_TORQUECONTROLLER:
            wrapper->instance = new mcc_poc_torquecontroller();
            break;
        default:
            delete wrapper;
            return nullptr;
    }
    return wrapper;
}

extern "C" void Mcc_Destroy(MccHandle handle) {
	MccWrapper* wrapper = static_cast<MccWrapper*>(handle);
    if(!wrapper) return;
    switch(wrapper->type) {
        //case MCC_SPARKCORE: delete static_cast<A*>(wrapper->instance); break;
        //case MCC_SPARKCORE_EMC: delete static_cast<B*>(wrapper->instance); break;
        case MCC_POC_TORQUECONTROLLER: delete static_cast<mcc_poc_torquecontroller*>(wrapper->instance); break;
    }
    delete wrapper;
}

extern "C" void Mcc_SetContext(MccHandle handle, void* ctx) {
	MccWrapper* wrapper = static_cast<MccWrapper*>(handle);
    if(!wrapper) return;
    switch(wrapper->type) {
        //case APP_A: static_cast<A*>(wrapper->instance)->setContext(ctx); break;
        //case APP_B: static_cast<B*>(wrapper->instance)->setContext(ctx); break;
    //case MCC_POC_TORQUECONTROLLER: delete static_cast<mcc_poc_torquecontroller*>(wrapper->instance)->set; break;
    }
}
