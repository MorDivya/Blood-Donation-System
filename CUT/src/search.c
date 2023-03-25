/*
 * FILE:search.c
 *
 * DESC:This file helps the admin to search for particular blood group
 *
 */


#include<stdio.h>
#include<stdlib.h>
#include<struct.h>
#include<functions.h>
#include<string.h>
#include<macros.h>
void search()
{
	FILE *fp;
	fp=fopen("../data/donor.txt","r");
	if(fp==NULL)
	{
		printf("\nFILE Not FOUND");
	}
	else
	{
		char bg[20];
		printf("\nEnter the blood group:");
		scanf("%s",bg);
		reg *start=NULL;
		long long aadharno;
		int age,units;
		char dname[20],bgroup[20];
		while( EOF!=fscanf(fp,"%lld%s%d%s%d\n",&aadharno,dname,&age,bgroup,&units))
		
		{
			reg *r1=(reg *)calloc(1,sizeof(reg));
			r1->aadharno=aadharno;
			strcpy(r1->dname,dname);
			r1->age=age;
			strcpy(r1->bgroup,bgroup);
			r1->units=units;
			r1->link=NULL;
			if(start==NULL)
			{
				start=r1;
			}
			else
			{
				reg *q=start;
				while(q != NULL && q->link!=NULL)
					{ 
					  q=q->link;
				   
				}
				q->link=r1;

			}
			
		}
		
		for(reg *q=start;q!=NULL;q=q->link)
		{
			if(strcmp(bg,q->bgroup)==0)
			{
				printf("\n Details of Donors\n ");
				printf("%lld %s %d %s %d",q->aadharno,q->dname,q->age,q->bgroup,q->units);
			}
			else
			printf("\nDetails not found");
		}
		fclose(fp);
	}
}
