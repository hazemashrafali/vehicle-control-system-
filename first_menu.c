/*
 * first_menu.c
 *
 *  Created on: Dec 22, 2021
 *      Author: HAZEM-PC
 */
#include<stdio.h>
#include "main.h"
#include "first_menu.h"
#include "conio.h"
char first_menu(void)				//first system menu,print system menu,take input and return selected value
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char select=0;					//used to store choice value
	printf("a. turn on the vehicle engine\n");
	printf("b. turn off the vehicle engine\n");
	printf("c. Quit the system\n");
	scanf(" %c",&select);
	switch(select)
	{
	case 'a':
		printf("turn on the vehicle engine\n\n");
		break;
	case 'b':
		printf("turn off the vehicle engine\n\n");
		break;
	case 'c':
		printf("Quit the system\n");
		break;
	default:
		return 'q';
	}
	return select;
}
