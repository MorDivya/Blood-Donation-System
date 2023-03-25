/*
 * FILE:donor.c
 *
 *
 * DESC :This file consists of various sub functions to perform various operations by admin
 *
 */




#include<stdio.h>
#include<struct.h>
#include<macros.h>
#include<functions.h>
#include<struct.h>
#include<stdlib.h>
void donor()
{
        int choice;
        while(1)
        {
                printf("\n1:Delete\n2:Update\n3:View Donors\n4:Go to Main Menu");
                printf("\nEnter choice ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1: del_donor();
				break;
			case 2: update_donor();
                                break;
                        case 3: view_donors();
			        break;
		        case 4: menu();
                        default: printf("\nInvalid Choice ");
				 break;
                }
        }
}

