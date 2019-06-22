#include<iostream>
#include<stdio.h>
using namespace std;

void charTo(int n)
{
    switch(n)
    {
        case 0:
            cout<<"Zero ";
        break;
        case 1:
            cout<<"One ";
        break;
        case 2:
            cout<<"Two ";
        break;
        case 3:
            cout<<"Three ";
        break;
        case 4:
            cout<<"Four ";
        break;
        case 5:
            cout<<"Five ";
        break;
        case 6:
            cout<<"Six ";
        break;
        case 7:
            cout<<"Seven ";
        break;
        case 8:
            cout<<"Eight ";
        break;
        case 9:
            cout<<"Nine ";
        break;
    }

}
int main(int argc, char const *argv[])
{
    cout<<"Enter a Number : ";
    long int num, rev, rem;
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        rev = rev*10+rem;
        num/=10;
    }

    while(rev>0)
    {
        charTo(rev%10);
        rev/=10;
    }
    return 0;
}
