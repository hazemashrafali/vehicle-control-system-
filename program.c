/*
 * program.c
 *
 *  Created on: Dec 22, 2021
 *      Author: HAZEM-PC
 */


#include "main.h"
#include "Display_state.h"
#include "Engine_Temp.h"
#include "Light_color.h"
#include "Room_Temp.h"
#include "sensors_menu.h"
#include "first_menu.h"

int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct vehicle pv={"off","off","off",30,30,30};   //str
	char first_select,second_select;

	while(1)
	{
		first_select=first_menu();
		if(first_select=='b')
			continue;						//turn off system-display first menu
		else if(first_select=='c')
			return 0;                     //Quit the system
		while(first_select == 'a')			//turn on system
		{
			second_select=sensors_menu();
			if(second_select == 'a')
			{
				break;
			}                                      //if choose turn off engine,back to main menu
			else if(second_select == 'b')
			{
				light_color(&pv);              //set light color
				Display_state(&pv);            //display system state

			}
			else if(second_select == 'c')
			{
				Set_Room_Temp(&pv);           //set room temperature
				Display_state(&pv);           //display system state
			}
#if WITH_ENGINE_TEMP_CONTROLLER
			else if(second_select == 'd')
			{
				Set_Engine_Temp(&pv);         //set engine temperature
				Display_state(&pv);           //display system state
			}
#endif
		}
	}

}
