/*
 * Engine_Temp.c
 *
 *  Created on: Dec 22, 2021
 *      Author: HAZEM-PC
 */



#include "main.h"
#include "Engine_Temp.h"
#include "string.h"

#if WITH_ENGINE_TEMP_CONTROLLER

void Set_Engine_Temp(struct vehicle *pv)			//function used to set engine temperature
{
	int temp;
	printf("enter input:\n");						//sensor read value
	scanf("%d",&temp);
	if(temp<100)
	{
		strcpy(pv->engine_state,"on");
		strcpy(pv->engine_temp_control,"on");
		pv->Etemp=125;
	}
	else if(temp>150)
	{
		strcpy(pv->engine_state,"on");
		strcpy(pv->engine_temp_control,"on");
		pv->Etemp=125;
	}
	else
	{
		strcpy(pv->engine_state,"on");
		strcpy(pv->engine_temp_control,"off");
	}

}
#endif
