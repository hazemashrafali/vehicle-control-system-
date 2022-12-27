/*
 * sensors_menu.c
 *
 *  Created on: Dec 22, 2021
 *      Author: HAZEM-PC
 */

#include "main.h"
#include "sensors_menu.h"

char sensors_menu(void)			//print sensors menu,take input and return selected value
{
	char select;

	printf("a. turn off the engine\n");
	printf("b. set the traffic light color\n");
	printf("c. set the room temperature(temperature sensor)\n");
#if WITH_ENGINE_TEMP_CONTROLLER
	printf("d. set the engine temperature (engine temperature sensor)\n");
#endif
	scanf(" %c",&select);
	switch(select)
	{
	case 'a':
		printf("turn off the engine\n\n");
		break;
	case 'b':
		printf("set the traffic light color\n\n");
		break;
	case 'c':
		printf("set the room temperature(temperature sensor)\n\n");
		break;
#if WITH_ENGINE_TEMP_CONTROLLER
	case 'd':
		printf("set the engine temperature (engine temperature sensor)\n\n");
		break;
#endif
	default:
		return 'q';
	}
	return select;
}
