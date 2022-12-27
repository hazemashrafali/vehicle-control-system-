/*
 * Light_color.c
 *
 *  Created on: Dec 22, 2021
 *      Author: HAZEM-PC
 */

#include "main.h"
#include "Light_color.h"
#include "string.h"

void light_color(struct vehicle *pv)				//set light color
{
	char select;
	printf("enter input:\n");						//read sensor value
	scanf(" %c",&select);
	while(select != 'g' && select != 'G' && select != 'o' && select != 'O' && select != 'R' && select != 'r')	//loop until input valid parameter
	{
		printf("invalid input!\n");
		scanf(" %c",&select);
	}
	if(select == 'g' || select == 'G')
	{
		strcpy(pv->engine_state,"on");
		pv->Vspeed=100;
	}
	else if(select == 'o' || select == 'O')
	{
		pv->Vspeed=30;
		strcpy(pv->engine_state,"on");
		strcpy(pv->AC_state,"on");
		pv->Rtemp=(pv->Rtemp*((float)5/4)+1);
		strcpy(pv->engine_temp_control,"on");
		pv->Etemp=(pv->Etemp*((float)5/4)+1);
	}
	else if(select == 'r' || select == 'R')
	{
		strcpy(pv->engine_state,"on");
		pv->Vspeed=0;
	}
}
