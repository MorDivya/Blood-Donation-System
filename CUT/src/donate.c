/*
 * FILE:donate.c
 

 *DESC:This file displays number of units left after donating blood by the donor when received by the receiver

 */



#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
#include<macros.h>
#include<struct.h>

void donate( )
{
	long long dadno , radno ;
	int no;
	FILE *fw1 = fopen("../data/donate.txt","a");
	printf("\nEnter Aadhar number of donor ");
	scanf("%lld",&dadno);
	printf("\nEnter Aadhar number of reciever ");
	scanf("%lld",&radno);
	printf("\nEnter number of units to be donated ");
	scanf("%d",&no);
	if(dadno != radno)
	{	
	FILE *fr = fopen("../data/donor.txt","r");
	FILE *fw = fopen("../data/temp2.txt","w");

	long long adno;
	int units , ag;
	char name[20],bg[20];
	printf("start reading\n");
	
	while(EOF !=fscanf(fr,"%lld%s%d%s%d",&adno,name,&ag,bg,&units) )
	{
		if(dadno == adno)
		{
			units = units-no;
				printf("matched and updating the file\n");
			fprintf(fw,"%lld %s %d %s %d\n",adno,name,ag,bg,units);			
		}
		else
			fprintf(fw,"%lld %s %d %s %d\n",adno,name,ag,bg,units);	
			fscanf(fr,"%lld%s%d%s%d",&adno,name,&ag,bg,&units);
			printf("end\n");
	}
	fclose(fr);
	fclose(fw);
	remove("../data/donor.txt");
	rename("../data/temp2.txt","../data/donor.txt");	
	printf("update donate\n");
		fprintf(fw1,"\n%lld %lld %d",dadno,radno,no);
	fclose(fw1);
	}
	else
		printf("Aadhar number of reciever and donor cannot be same ");	
}
