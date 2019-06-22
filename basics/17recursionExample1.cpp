//Recursion is used to remove the looping via decision control statements

#include<iostream>
#include<stdio.h>
using namespace std;

void power(int, int, int, int);                     //Declaring Function

int main(int argc, char const *argv[])
{
    int base, index;
    cout<<"Enter Base : ";
    cin>>base;
    cout<<"Enter Index : ";
    cin>>index;
    power(base, index, index, 1);
    return 0;
}

void power(int base, int index, int i, int p)       //Defining Function
{
    if (i>=1)                                       //write logic in if block
    {
        p*=base;
        i--;
        power(base, index, i, p);
    }
    else                                            //Outputting in else block
    {
        cout<<endl<<base<<"^"<<index<<" : "<<p;
    }
}