/*
 * FILE:del_donor.c
 *
 * DESC: This file helps admin to delete the record of the donor
 */



#include<stdlib.h>
#include<stdio.h>
#include<functions.h>
#include<struct.h>
void del_donor()
{

	reg *r2=(reg *)calloc(1,sizeof(reg));
	long long adno;
        FILE *fp=fopen("../data/donor.txt","r");
	FILE *fw=fopen("../data/ex.txt","a");
        printf("\nEnter the Aadhar Number to delete the record:");
	scanf("%lld",&adno);
  	while(fscanf(fp,"%lld%s%d%s%d",&r2->aadharno,r2->dname,&r2->age,r2->bgroup,&r2->units)!=EOF)

	{	

		if(r2->aadharno!=adno)
		{	
                       printf("%lld%s%d%s%d\n",r2->aadharno,r2->dname,r2->age,r2->bgroup,r2->units);

			fprintf(fw,"\n%-10lld%-10s%-10d%-10s%d\n",r2->aadharno,r2->dname,r2->age,r2->bgroup,r2->units);
                             
                 }
	}
	fclose(fp);
	fclose(fw);
        remove("../data/donor.txt");
        rename("../data/ex.txt","../data/donor.txt");
        printf("\nRecord deleted");
	return;


}
