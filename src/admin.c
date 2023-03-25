/*FILE :admin.c
 *DESC:This file helps admin to login successfully
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<struct.h>
#include<functions.h>
#include<macros.h>
void admin()
{
        FILE *info;
        info=fopen("../data/password.txt","r");
        if(info==NULL)
        {
                printf("\nFile does not exists ");
		return;
                
        }
        else
        {
                system("clear");
                char uname[MAX],username[MAX],pw[MAX],password[MAX];
                fscanf(info,"%s %s",uname,pw);
                fclose(info);
                printf("\nEnter the Admin name ");
                scanf("%s",username);
                printf("\nEnter the password ");
                scanf("%s",password);
	        if(strcmp(uname,username)==0 && strcmp(pw,password)==0)
                {
                        printf("----------------------------");
                        printf("\nAdmin Login Successfully\n");
                        menu_admin();
                }
                else
                        printf("\nInvalid login details");
		        
        
       }
	fclose(info);
	
	
}


