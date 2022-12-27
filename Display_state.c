/*
 * Display_state.c
 *
 *  Created on: Dec 22, 2021
 *      Author: HAZEM-PC
 */


#include "main.h"
#include "Display_state.h"

void Display_state(struct vehicle *pv)				//used to display system state
{
	printf("Engine is %s\n",pv->engine_state);
	printf("AC is %s\n",pv->AC_state);
	printf("vehicle speed: %d Km/Hr\n",pv->Vspeed);
	printf("Room Temperature: %f C\n",pv->Rtemp);
#if WITH_ENGINE_TEMP_CONTROLLER
	printf("Engine Temperature Controller is %s\n",pv->engine_temp_control);
	printf("engine Temperature: %f C\n\n",pv->Etemp);
#endif
}
