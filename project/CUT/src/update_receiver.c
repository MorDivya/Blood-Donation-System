/*
 * FILE:update_receiver.c
 *
 * DESC:This file helps the admin to update the details of receiver
 *
 */


#include<stdlib.h>
#include<stdio.h>
#include<functions.h>
#include<struct.h>
#include<string.h>
#include<macros.h>

void update_receiver()
{
FILE *fr = fopen("../data/receiver.txt","r");
FILE *fw = fopen("../data/temp1.txt","w");

long long  adno;
int  ag;
char name[MAX],bg[MAX];
fscanf(fr,"%lld%s%d%s",&adno,name,&ag,bg);

long long  no;
printf("\nEnter the aadhar number of the record to be updated ");
scanf("%lld",&no);
char rname[MAX];
int uage;
while(!feof(fr))
{
if(no == adno)
{
getchar();	
printf("\nEnter the name to be updated : ");
scanf("%s",rname);
printf("\n Enter the age: ");
scanf("%d",&uage);
fprintf(fw,"%lld %s %d %s \n",adno,rname,uage,bg);
}
else
fprintf(fw,"%lld %s %d %s \n",adno,rname,uage,bg);
fscanf(fr,"%lld%s%d%s",&adno,name,&ag,bg);
}
fclose(fr);
fclose(fw);
remove("../data/receiver.txt");
rename("../data/temp1.txt","../data/receiver.txt");
}


