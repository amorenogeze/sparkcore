/*
 * HBridge.h
 *
 *  Created on: Nov 2, 2025
 *      Author: abelm
 */

#ifndef HBRIDGE_INC_HBRIDGE_H_
#define HBRIDGE_INC_HBRIDGE_H_

typedef struct
{
	int frequency;
	int (*HBridge_Enable_Ptr)(void);
	int (*HBridge_Disable_Ptr)(void);
	int (*HBridge_Set_DC_CW_ptr)(float);
	int (*HBridge_Set_DC_CCW_ptr)(float);
}sHBridgeConfiguration;

int HBridge_Initialize(sHBridgeConfiguration *);
int HBridge_Enable();
int HBridge_Disable();
int HBridge_Set_DC_CW(float);
int HBridge_Set_DC_CCW(float);

#endif /* HBRIDGE_INC_HBRIDGE_H_ */
