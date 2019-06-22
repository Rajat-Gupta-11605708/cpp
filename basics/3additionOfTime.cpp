#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int h1,h2,h3,m1,m2,m3;
    //int rem;
    fflush(stdin);
    cout<<"Enter Time 1 : ";
    cin>>h1>>m1;
    cout<<"Enter Time 2 : ";
    cin>>h2>>m2;


    int minadd = m1+m2;
    int hadd = h1+h2;

    if (hadd>24)
    {
        h3 = hadd-24;
    }
    else
        h3 = hadd;

    if (minadd>60)
    {
        m3 = minadd-60;
        h3+=1;
    }
    else
        m3 = minadd;

    cout<<"\nOutput Time : "<<h3<<" : "<<m3;

}
