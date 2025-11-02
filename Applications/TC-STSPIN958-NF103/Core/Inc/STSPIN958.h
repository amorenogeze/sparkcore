/*
 * STSPIN958.h
 *
 *  Created on: Nov 2, 2025
 *      Author: abelm
 */

#ifndef HBRIDGE_INC_STSPIN958_H_
#define HBRIDGE_INC_STSPIN958_H_
#include "HBridge.h"

int STSPIN958_Initialize(int frequency);
int STSPIN958_Enable();
int STSPIN958_Disable();
int STSPIN958_Set_DC_CW(float);
int STSPIN958_Set_DC_CCW(float);

#endif /* HBRIDGE_INC_STSPIN958_H_ */
