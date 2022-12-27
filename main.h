/*
 * main.h
 *
 *  Created on: Dec 22, 2021
 *      Author: HAZEM-PC
 */

#ifndef MAIN_H_
#define MAIN_H_
#define WITH_ENGINE_TEMP_CONTROLLER 1            /*
                                                 if this #define is 1 then compile/run the code lines
                                                 that are related to the “Engine Temperature Controller
                                                 */
#include <stdio.h>

struct vehicle									//structure define vehicle variables
{
	char engine_state[5];
	char AC_state[5];
	char engine_temp_control[5];
	int Vspeed;
	float Rtemp;
	float Etemp;
};

extern struct vehicle pv;

#endif /* MAIN_H_ */
