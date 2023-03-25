/*
 * FILE:del_receiver.c
 *
 *
 * DESC:This file helps admin to delete the records of the receiver
 */




#include<stdlib.h>
#include<stdio.h>
#include<functions.h>
#include<struct.h>
void del_receiver()
{
	r_reg *r2=(r_reg *)calloc(1,sizeof(r_reg));
	long long adno;
        FILE *fp=fopen("../data/receiver.txt","r");
	FILE *fw=fopen("../data/ex.txt","w");
        printf("\nEnter the Aadhar Number to delete the record:");
	scanf("%lld",&adno);
  	while(fscanf(fp,"%lld%s%d%s",&r2->aadharno,r2->rname,&r2->age,r2->bgroup)!=EOF)
	{

		if(r2->aadharno!=adno)
		{
			fprintf(fw,"\n%-10lld%-10s%-10d%s\n",r2->aadharno,r2->rname,r2->age,r2->bgroup);
                        
		}

	}	
	fclose(fp);
	fclose(fw);
	printf("\nRecord Deleted ");
        remove("../data/receiver.txt");
	rename("../data/ex.txt","../data/receiver.txt");
	return;


}
