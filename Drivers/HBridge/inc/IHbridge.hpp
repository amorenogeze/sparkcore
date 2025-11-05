/*
 * IHbridge.hpp
 *
 *  Created on: Nov 3, 2025
 *      Author: abelm
 */

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
