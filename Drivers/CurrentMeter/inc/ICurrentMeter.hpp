/*
 * ICurrentMeter.hpp
 *
 *  Created on: Nov 5, 2025
 *      Author: abel
 */

#ifndef CURRENTMETER_INC_ICURRENTMETER_HPP_
#define CURRENTMETER_INC_ICURRENTMETER_HPP_
#include <cstdint>

class ICurrentMeter {
public:
	virtual ~ICurrentMeter() = default;
	virtual void Init() = 0;
	virtual void CenterAlignSampling() = 0;
	virtual void InterruptHandler(uint16_t*, uint8_t) = 0;
	virtual void DataReadyCB(uint32_t) = 0;
private:
};



#endif /* CURRENTMETER_INC_ICURRENTMETER_HPP_ */
