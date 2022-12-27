/*
 * Room_Temp.c
 *
 *  Created on: Dec 22, 2021
 *      Author: HAZEM-PC
 */

#include "main.h"
#include "Room_Temp.h"
#include "string.h"

void Set_Room_Temp(struct vehicle *pv)				//function used to set room temperature
{
	int temp;
	printf("enter input:\n");						//sensor read value
	scanf("%d",&temp);
	if(temp<10)
	{
		strcpy(pv->AC_state,"on");
		strcpy(pv->engine_state,"on");
		pv->Rtemp=20;
	}
	else if(temp>30)
	{
		strcpy(pv->AC_state,"on");
		strcpy(pv->engine_state,"on");
		pv->Rtemp=20;
	}
	else
	{
		strcpy(pv->engine_state,"on");
		strcpy(pv->AC_state,"off");
	}

}
