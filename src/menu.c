/*
 *
 * File:menu.c
 *
 * DESC:This file gives the menu of the main page 
 *
 */





#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
void menu()
{
	int choice;
	while(1)
	{
		printf("\n1:Admin\n2:Registration\n3:Exit");
		printf("\nEnter Your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		     case 1: admin();
		             break;
		     case 2: registration();
		             break;
		     case 3: exit(0);
		     default: printf("\nInvalid Choice");
		}
	}
}

