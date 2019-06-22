#include<iostream>
#include<stdio.h>
using namespace std;

int strlen(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i+=1;
	}
	return i;
}

int strcmp(char str1[], char str2[])
{
	int l1, l2, i;
	l1=strlen(str1);
	l2=strlen(str2);
	if (l1!=l2)
	{
		return 0;
	}
	else
	{
		for (i=0;i<l1;i++)
		{
			if(str1[i]==str2[i])
			{
				l2-=1;
			}
			else
			{
				l2+=1;
			}
		}
		if (l2==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

void strlwr(char str[])
{
	cout<<"\n\nConverting String "<<str<<" into Lowercase ";
	int l1 = strlen(str);
	int i, ord;
	for (i=0;i<l1;i++)
	{
		ord = int(str[i]);
		if (ord>=65 && ord<=90)
		{
			ord+=32;
			cout<<char(ord);
		}
		else
		{
			cout<<char(ord);
		}
	}
}

void strupr(char str[])
{
	cout<<"\n\nConverting String "<<str<<" into Uppercase ";
	int l1 = strlen(str);
	int i, ord;
	for (i=0;i<l1;i++)
	{
		ord = int(str[i]);
		if (ord>=97 && ord<=122)
		{
			ord-=32;
			cout<<char(ord);
		}
		else
		{
			cout<<char(ord);
		}
	}
}

void strcat(char str1[], char str2[])
{
	int l1, l2, i;
	l1=strlen(str1);
	l2=strlen(str2);
	int l3=l1+l2;
	char concats[l3];
	int index=0;
	for(i=0;i<l3;i++)
	{
		if (i>=0 && i<l1)
		{
			concats[i]=str1[i];
			index+=1;
		}
		else
		{
			concats[i]=str2[i-index];
		}
	}
	cout<<"\n\nConcatenation of String1 and String2 : "<<concats;
}

void strcpy(char str1[], char str2[])
{
	int l1, l2, i;
	l1=strlen(str1);
	l2=strlen(str2);
	if(l2>l1)
	{
		cout<<"Cannot copy as length of second string is greater than first string";
	}
	else
	{
		
	}
}

int main()
{
	char str1[100];
	char str2[100];
	int x;
	cout<<"Enter String 1 : ";
	cin>>str1;
	cout<<"Enter String 2 : ";
	cin>>str2;
	
	x = strlen(str1);
	cout<<"\nLength of String 1 "<<str1<<" is : "<<x;

	x = strlen(str2);
	cout<<"\nLength of String 2 "<<str2<<" is : "<<x;
	
	cout<<"\n\nComparing String 1 and String 2 : ";
	x = strcmp(str1, str2);
	
	if(x==1)
	{
		cout<<"Equal";
	}
	else
	{
		cout<<"Not Equal";
	}
	
	strcat(str1, str2);
	
	strlwr(str1);
	strlwr(str2);
	
	strupr(str1);
	strupr(str2);
		
}
