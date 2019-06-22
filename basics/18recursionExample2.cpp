#include<iostream>
#include<stdio.h>
using namespace std;
void factorial(int num, int p)
{
    if(num>=1)
    {
        p = p*num;
        num-=1;
        factorial(num, p);
    }
    else
    {
        cout<<"Factorial is "<<p;
    }  
}

void reverse(int n, int r, int rev, int i)
{
    if(i>=0)
    {
        r = n%10;
        rev = rev*10+r;
        n/=10;
        i-=1;
        reverse(n, r, rev, i);
    }
    else
    {
        cout<<"Reverse is : "<<rev;
    }
    
}
int main(int argc, char const *argv[])
{
    cout<<"Enter a Number to be Reversed        : ";
    int num;
    cin>>num;
    reverse(num, 1, 1, num);
    cout<<"Enter a Number to Find it's Factorial : ";
    fflush(stdin);
    cin>>num;
    factorial(num, 1);
    return 0;
}
