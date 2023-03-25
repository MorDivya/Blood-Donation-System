/*
 * FILE:validate.c
 *
 * DESC:This file consists of validation for name
 */


#include<stdlib.h>
#include<functions.h>
#include<string.h>
#include<ctype.h>
int isvalidate(char *name)
{
	for(int i=0 ; i<strlen(name) ; i++)
	{
		if(isalpha(name[i]))
			continue;
		else 
			return 0;
	}
	return 1;

}
int isPhnValid(char *phno)
{
	long len =strlen(phno);
	if(len!=10)
		return 0;
	for(int i=0;i<len;i++)
	{
		if(phno[i]<48 && phno[i]>57)
			return 0;
	}
	return 1;
}
