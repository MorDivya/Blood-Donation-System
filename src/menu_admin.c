/*
 * FILE:menu_admin.c
 *
 * DESC:This file defines the function consists of various subfunctions to perform operations by admin
 *
 */



#include<stdio.h>
#include<stdlib.h>
#include<macros.h>
#include<functions.h>
#include<struct.h>
void menu_admin()
{
	int choice;
	while(1)
	{
		printf("\n1:Donor\n2:Receiver\n3:Records\n4:donate\n5:Exit");
		printf("\nEnter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: donor();
				break;
			case 2: receiver();
				break;
			case 3: records();
				break;
			case 4: donate();
				break;
			case 5:exit(0);
			default:printf("\nInvalid choice");
				 break;
		}
	
	}
        
}

