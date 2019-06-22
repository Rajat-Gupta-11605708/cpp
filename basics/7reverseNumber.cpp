#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int r, n;
	cout<<"Enter a Number : ";
	fflush(stdin);
	cin>>n;
	cout<<endl<<endl;
	while(n>0)
	{
		r = n%10;
		cout<<r;
		n = n/10;
	}
	return 0;
}