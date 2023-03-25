/*
 * FILE:update_donor.c
 *
 * DESC:This file helps the admin to update the details of donor
 *
 */


#include<stdlib.h>
#include<stdio.h>
#include<functions.h>
#include<struct.h>
#include<string.h>
#include<macros.h>

void update_donor( )
{
	FILE *fr = fopen("../data/donor.txt","r");
	FILE *fw = fopen("../data/temp.txt","w");
	
	long long  adno;
	int units , ag;
	char name[20],bg[20];
	fscanf(fr,"%lld%s%d%s%d",&adno,name,&ag,bg,&units);
	long long no;

	printf("\nEnter the aadhar number of the donor ");
	scanf("%lld",&no);	
	int flag = 0;
	int un;
	while(!feof(fr))
	{
		if(no == adno)
		{
			flag = 1;
			printf("\nEnter the number of units to be updated ");
			scanf("%d",&un);
			units = units+un;
			fprintf(fw,"%lld %s %d %s %d\n",adno,name,ag,bg,units);			
		}
		else
			fprintf(fw,"%lld %s %d %s %d\n",adno,name,ag,bg,units);					
		fscanf(fr,"%lld%s%d%s%d",&adno,name,&ag,bg,&units);
	}
	if(flag == 0 )
		printf("\nDonor does not Exists !!! ");
	fclose(fr);
	fclose(fw);
	remove("../data/donor.txt");
	rename("../data/temp.txt","../data/donor.txt");	
}
