/*
 * ICurrentMeter.hpp
 *
 *  Created on: Nov 5, 2025
 *      Author: abel
 */

#ifndef CURRENTMETER_INC_ICURRENTMETER_HPP_
#define CURRENTMETER_INC_ICURRENTMETER_HPP_
#include <cstdint>
#include <functional>

class ICurrentMeter {
public:
	virtual ~ICurrentMeter() = default;
	virtual void Init() = 0;
	virtual void ADCCenterAlignSampling() = 0;
	virtual void SetADCData(uint16_t*, uint8_t) = 0;
	virtual void SetCallback(Callback);

private:
	 using Callback = std::function<void(uint32_t)>;
};



#endif /* CURRENTMETER_INC_ICURRENTMETER_HPP_ */
