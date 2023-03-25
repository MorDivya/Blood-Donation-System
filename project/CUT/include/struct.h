#pragma once
#include<macros.h>
typedef struct d_registrations 
{
	char dname[MAX],gender[MAX],bgroup[MAX],phno[SIZE];
	long long aadharno; 
	int age,units;
	struct d_registrations *link;
	char un[MAX],pwd[MAX];
}reg;
typedef struct r_registration
{
	char rname[MAX],bgroup[MAX],gender[MAX];
	long long aadharno;
	struct r_registration *link;
	int age;

}r_reg;

