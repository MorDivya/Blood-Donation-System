/*
 * FILE:receiver_reg.c
 *
 * DESC:This file helps the receiver to register
 *
 */




#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<struct.h>
#include<functions.h>
#include<macros.h>
#include<stdbool.h>

void receiver_reg()
{
	FILE *fp;
	fp=fopen("../data/receiver.txt","a");
	r_reg *start=NULL;
	r_reg *m=(r_reg *)calloc(1,sizeof(r_reg));

	if(fp==NULL)
	{
         	printf("\nFile does not Exist");
	       
	}
	else
	{

			        
		printf("\n****************************************************************\n");
		printf("                        Registration Form                           ");
        	printf("\n****************************************************************\n");
		while(1)
		{
	       	 		printf("\nEnter your Aadhar Number : ");
	        		scanf("%lld",&m->aadharno);
		          	long temp=m->aadharno;
			  	int d=0;
                          	while(temp>0)
		       	  	{
			  		temp=temp/10;
	        	  		d++;
        	          	}
			  	if(d<12 || d>12)
			   	{
		
	               		 	printf("\nAadhar is not valid !!!Please try Again ");
					continue;
			   	}
			  	else
					break;
			}
		
		}
		getchar();
		while(1)
		{
			printf("\nEnter Your Name : ");
        		fgets(m->rname,MAX,stdin);
                	m->rname[strlen(m->rname)-1]='\0';
			if(isvalidate(m->rname))
				break;
			else
			{
				printf("Invalid name");
		        	
			}
		}
		while(1)
		{
			printf("\nEnter your age : ");
        		scanf("%d",&m->age);
			if(isdigit(m->age))
					return;
			else
				break;
		}
		while(1)
		{
			printf("\nEnter your blood group:");
			scanf("%s",m->bgroup);
		       break;			

		
		}

		m->link = NULL;
		if(start == NULL)
		{
			start = m;
			fprintf(fp,"%lld %s %d %s\n",m->aadharno,m->rname,m->age,m->bgroup);	
		}
		else
		{
			r_reg *q=start;
			bool duplicate=false;
			{
				if(q->aadharno==m->aadharno)
				{
					printf("\nfound duplicates ");
					duplicate=true;
				}
				while(q!=NULL && q->link!=NULL)
				{
					if(q->aadharno==m->aadharno)
					{	
						printf("\nFound duplicate ");
						duplicate=true;
						break;
					}
					q=q->link;
				}
			q->link = m;
			if(!duplicate)
			fprintf(fp,"%lld %s %d  %s\n",m->aadharno,m->rname,m->age,m->bgroup);	
		}
		printf("\nWelcome %s !!!\n",m->rname);
		printf("Thank you for Registration with us !!!");
	}
	fclose(fp);
	menu();
}


