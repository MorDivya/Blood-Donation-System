/*
 * FILE:registration.c
 *
 * DESC:THis file consists various sub functions where the donor and receiver can register
 *
 */


#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
void registration()
{
	int choice;
	while(1)
	{
		printf("\n1:Please enter 1 if you are donor\n2:Please enter 2 if you are receiver\n3:exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: donor_reg();
				break;
			case 2: receiver_reg();
				break;
			case 3: exit(0);
			default: printf("\nInvalid choice");
		}
	}
}
