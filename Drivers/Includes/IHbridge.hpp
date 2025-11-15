/***********************************************************************************
 * @file        IHBridge.hpp
 * @author      a.moreno@geze.com
 * @brief       HBridge driver interface
 *
 * @details
 *
 *
 * @date        <2025-11-14>
 ***********************************************************************************/

#ifndef HBRIDGE_INC_IHBRIDGE_HPP_
#define HBRIDGE_INC_IHBRIDGE_HPP_
#include <cstdint>


class IHbridge {
public:
	virtual ~IHbridge() = default;

	virtual void Init() = 0;
	virtual bool Enable() = 0;
	virtual bool Disable() = 0;
	virtual bool SetDutycycleClockWise(float) = 0;
	virtual bool SetDutycycleCounterClockWise(float) = 0;

	virtual bool SetFrequency(uint32_t) = 0;

};


#endif /* HBRIDGE_INC_IHBRIDGE_HPP_ */
