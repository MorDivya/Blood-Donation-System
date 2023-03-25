/*
 * FILE:receiver.c
 *
 * DESC:This file helps admin to perform various operations on receiver page
 *
 */



#include<stdio.h>
#include<struct.h>
#include<macros.h>
#include<functions.h>
#include<struct.h>
#include<stdlib.h>
void receiver()
{
        int choice;
        while(1)
        {
                printf("\n1:Delete\n2:Update\n3:View Receiver\n4:Search\n5:Go to Main Menu");
                printf("\nEnter choice ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1: del_receiver();
				break;
			case 2: update_receiver();
                                break;
                        case 3: view_receiver();
			        break;
		        case 4: search();
				break;
			case 5: menu();
                        default: printf("\nInvalid Choice ");
				 break;
                }
        }
}

