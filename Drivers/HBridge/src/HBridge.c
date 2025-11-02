/*
 * HBridge.c
 *
 *  Created on: Nov 2, 2025
 *      Author: abelm
 */
#include "HBridge.h"
#include "stddef.h"

sHBridgeConfiguration config;

int HBridge_Initialize(sHBridgeConfiguration * cfg)
{
	config.frequency = cfg->frequency;
	if(cfg->HBridge_Disable_Ptr != NULL)
		config.HBridge_Disable_Ptr = cfg->HBridge_Disable_Ptr;
	if(cfg->HBridge_Enable_Ptr != NULL)
		config.HBridge_Enable_Ptr = cfg->HBridge_Enable_Ptr;
	if(cfg->HBridge_Set_DC_CCW_ptr != NULL)
		config.HBridge_Set_DC_CCW_ptr = cfg->HBridge_Set_DC_CCW_ptr;
	if(cfg->HBridge_Set_DC_CW_ptr != NULL)
		config.HBridge_Set_DC_CW_ptr = cfg->HBridge_Set_DC_CW_ptr;
	return 0;
}

int HBridge_Enable()
{
	return config.HBridge_Enable_Ptr();
}

int HBridge_Disable()
{
	return config.HBridge_Disable_Ptr();
}

int HBridge_Set_DC_CW(float DC)
{
	return config.HBridge_Set_DC_CW_ptr(DC);
}

int HBridge_Set_DC_CCW(float DC)
{
	return config.HBridge_Set_DC_CCW_ptr(DC);
}
