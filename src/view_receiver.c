/*
 * FILE:view_receiver.c
 *
 * DESC:This file helps the admin to view receiver details
 *
 */


#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
#include<macros.h>
#include<struct.h>
#include<string.h>
int view_receiver()
{
	
	FILE *fp;
	fp=fopen("../data/receiver.txt","r");
	if(fp==NULL)
	{
		printf("File doesnot exist ");
		
	}
	else
	{
		char rname[MAX],bgroup[MAX];
		int age;
		long long aadharno;
		printf("\n*****************************************\n");
		printf("            DETAILS OF RECEIVER                  ");
		printf("\n*****************************************\n");
	        r_reg *start=NULL;
	 	printf("\n%-20s%-20s%-20s%-20s%-20s","Aadharno","Receiver Name","Age","Blood Group");
		fscanf(fp,"%lld%s%d%s",&aadharno,rname,&age,bgroup);
		while(!feof(fp))
		{
			r_reg *temp = (r_reg *) calloc(1,sizeof(r_reg));
			temp->aadharno = aadharno;
			strcpy(temp->rname,rname);
			temp->age = age;
			strcpy(temp->bgroup,bgroup);
			temp->link = NULL;
			if(start == NULL)
			{
				start = temp;
			}
			else
			{
				r_reg *q = start;
				while(q->link != NULL)
					q = q->link;
				q->link = temp;
			}
			fscanf(fp,"%lld%s%d%s",&aadharno,rname,&age,bgroup);

		}
		fclose(fp);
		r_reg *q = start;
		while(q!=NULL)
		{
			printf("\n%-20lld%-20s%-20d%s ",q->aadharno,q->rname,q->age,q->bgroup);

			q=q->link;
		}
	
	}
	menu_admin();
}

	




	         
                
