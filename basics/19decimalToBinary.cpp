#include<iostream>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter a Number to Find it's Binary : ";
    int num, bin[32];
    cin>>num;
    int i=0;
    while(num>0)
    {
        bin[i]=num%2;
        num/=2;
        i+=1;
    }
    for(int j=i-1; j>=0; j--)
    {
        cout<<bin[j];
    }    
    return 0;
}
