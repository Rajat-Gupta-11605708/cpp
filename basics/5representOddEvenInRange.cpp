#include<iostream>
#include<stdio.h>
using namespace std;

void evenodd(int start, int ending)
{
	int i;
	cout<<"Even Numbers : ";
    for(i=start;i<=ending;i++)
    {
    	if(i%2==0)
    	{
    		cout<<i<<", ";
		}
	}
	
	cout<<"\nOdd Numbers : ";
    for(i=start;i<=ending;i++)
    {
    	if(i%2!=0)
    	{
    		cout<<i<<", ";
		}
	}
}
main()
{
	for(int i=0;i<4;i++)
	{
		fflush(stdin);
		int start, ending;
	    cout<<"Enter Starting Range Point : ";
	    cin>>start;
	    cout<<"Enter Ending Range Point : ";
	    cin>>ending;
	    evenodd(start,ending);
	    cout<<endl<<endl;
	}      
}
