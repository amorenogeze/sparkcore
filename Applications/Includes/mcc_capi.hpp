/*
 * mcc_capi.hpp
 *
 *  Created on: Nov 15, 2025
 *      Author: abelm
 */

#ifndef INCLUDES_MCC_CAPI_HPP_
#define INCLUDES_MCC_CAPI_HPP_

#include "mcc_capi.h"

class IMccAplication
{
public:
    virtual ~IMccAplication() = default;
    virtual void setContext(void* ctx) = 0;
    virtual void run() = 0;
};

#endif /* INCLUDES_MCC_CAPI_HPP_ */
