#include<iostream>
#include<stdio.h>
using namespace std;
int spflag=0;
int intflag=0;
int charflag=0;

void spChecker(char c)
{
	int ascii = int(c);
	if((ascii>=33 and ascii<=47)||(ascii>=58 and ascii<=64)||(ascii>=91 and ascii<=96)||(ascii>=123 and ascii<=126))
	{
		spflag=1;
	}
}

void charChecker(char c)
{
	int ascii = int(c);
	if((ascii>=65 and ascii<=90)||(ascii>=97 and ascii<=122))
	{
		charflag=1;
	}
}
void intChecker(char c)
{
	int ascii = int(c);
	if((ascii>=48 and ascii<=57))
	{
		intflag=1;
	}
}
main()
{
	char passwd[100];
	cin>>passwd;
	int i=0,len;
	
	
	for(i=0;passwd[i]!='\0';i++)
	{
		len+=1;
		spChecker(passwd[i]);
		charChecker(passwd[i]);
		intChecker(passwd[i]);
	}
	
	len-=1;
	
	if ((len>8)&&(spflag==1)&&(charflag==1)&&(intflag==1))
	{
		cout<<"Perfect";
	}
	else if((len>8)&&(spflag==0)&&(charflag==1)||(intflag==1))
	{
		cout<<"Good";
	}
	else
	{
		cout<<"Not Accepted";	
	}	
	
}
