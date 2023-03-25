/*
 * FILE:view_donors.c
 *
 * DESC:This file helps the admin to view the donor details
 *
 */


#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
#include<macros.h>
#include<struct.h>
#include<string.h>
void view_donors()
{
	
	FILE *fr;
	fr=fopen("../data/donor.txt","r");
	if(fr==NULL)
	{
		printf("File doesnot exist ");
	
	}
	else
	{
		char dname[MAX],bgroup[MAX],phno[SIZE];
		int age,units;
		long long aadharno;
		printf("\n*****************************************\n");
		printf("            DETAILS OF DONOR                  ");
		printf("\n*****************************************\n");
	        reg *start=NULL;
	 	printf("\n%-20s%-20s%-20s%-20s%s","Aadharno","Donor Name","Age","Blood Group","units");
		fscanf(fr,"%lld%s%d%s%d",&aadharno,dname,&age,bgroup,&units);
		while(!feof(fr))
		{
			reg *temp = (reg *) calloc(1,sizeof(reg));
			temp->aadharno = aadharno;
			strcpy(temp->dname,dname);
			temp->age = age;
			strcpy(temp->bgroup,bgroup);
			temp->units=units;
			temp->link = NULL;
			if(start == NULL)
			{
				start = temp;
			}
			else
			{
				reg *q = start;
				while(q->link != NULL)
					q = q->link;
				q->link = temp;
			}
			fscanf(fr,"%lld%s%d%s%d",&aadharno,dname,&age,bgroup,&units);

		}
		fclose(fr);
		reg *q = start;
		while(q!=NULL)
		{
			printf("\n%-20lld%-20s%-20d%-20s%d ",q->aadharno,q->dname,q->age,q->bgroup,q->units);

			q=q->link;
		}
	}
	menu_admin();
}

	




	         
                
