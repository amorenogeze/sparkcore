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

#include "mcc_poc_torquecontroller.hpp"
#include "mcc_sparkcore.hpp"
#include <stdexcept>

struct MccWrapper {
	IMccAplication* instance;
    MccType type;
};

extern "C" MccHandle Mcc_Create(MccType type)
{
    MccWrapper* wrapper = new MccWrapper;
    wrapper->instance = nullptr;
    wrapper->type = type;

    switch (type) {
        case MCC_POC_TORQUECONTROLLER:
            wrapper->instance = new mcc_poc_torquecontroller();
            break;
        //TODO: Add applications
        default:
            delete wrapper;
            return nullptr;
    }

    return wrapper;
}

extern "C" void Mcc_Destroy(MccHandle handle)
{
    MccWrapper* wrapper = static_cast<MccWrapper*>(handle);
    if (!wrapper) return;
    delete wrapper->instance;

}

extern "C" void Mcc_SetContext(MccHandle handle, void* ctx)
{
    MccWrapper* wrapper = static_cast<MccWrapper*>(handle);
    if (!wrapper) return;
    wrapper->instance->setContext(ctx);

}

extern "C" void Mcc_Run(MccHandle handle)
{
    MccWrapper* wrapper = static_cast<MccWrapper*>(handle);
    if (!wrapper) return;
    if (!wrapper->instance) return;
    // Forward the call to the C++ object
    wrapper->instance->run();
}
