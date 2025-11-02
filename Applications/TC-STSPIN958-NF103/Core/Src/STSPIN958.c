/*
 * STSPIN958.c
 *
 *  Created on: Nov 2, 2025
 *      Author: abelm
 */
#include "STSPIN958.h"

int STSPIN958_Initialize(int frequency)
{
	sHBridgeConfiguration cfg;
	cfg.frequency = frequency;
	cfg.HBridge_Disable_Ptr = STSPIN958_Disable;
	cfg.HBridge_Enable_Ptr = STSPIN958_Enable;
	cfg.HBridge_Set_DC_CW_ptr = STSPIN958_Set_DC_CW;
	cfg.HBridge_Set_DC_CCW_ptr = STSPIN958_Set_DC_CCW;
	HBridge_Initialize(&cfg);
	return 0;
}

int STSPIN958_Enable()
{

	return 0;
}

int STSPIN958_Disable()
{
	return 0;
}

int STSPIN958_Set_DC_CW(float)
{
	return 0;
}

int STSPIN958_Set_DC_CCW(float)
{
	return 0;
}
