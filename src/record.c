/*
 * FILE:record.c
 *
 * DESC:This file displays the number of blood units available for a particular blood group
 *
 */



#include<stdlib.h>
#include<stdio.h>
#include<functions.h>
#include<struct.h>
#include<string.h>
#include<macros.h>

void records( )
{
	FILE *fr = fopen("../data/donor.txt","r");
	
	
	long long  adno;
	int units , ag;
	char name[20],bg[20];
	fscanf(fr,"%lld%s%d%s%d",&adno,name,&ag,bg,&units);
	char b[10];

	printf("\nEnter the blood group ");
	scanf("%s",b);	
	
	int total=0;
	while(!feof(fr))
	{
		if(strcmp(b,bg) == 0)
		total=total+units;	
					
		fscanf(fr,"%lld%s%d%s%d",&adno,name,&ag,bg,&units);
	}
		printf("total no of %s =%d units",b,total);
		fclose(fr);
}
