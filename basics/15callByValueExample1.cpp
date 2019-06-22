#include<iostream>
#include<stdio.h>
using namespace std;
//void add(int, int);       //Declaration of Function

void reverse(int n)
{
    int rev=0, remainder=0;
    while(n!=0)
    {
        remainder=n%10;
        rev= rev*10+remainder;
        n/=10;
    }
    cout<<"\nReversed Number is : "<<rev;
}

int power(int base, int index)
{
    int i, res=1;
    if(index==0)
        return 1;
    else if (index>0)
    {
        for(i=0;i<index;i++)
        {
            res*=base;
        }
        return res;
    }
    else
    {
        return -1;
    }
    
}

int main(int argc, char const *argv[])
{
    cout<<"Enter a number to reverse it : ";
    int rev;
    cin>>rev;
    reverse(rev);
    cout<<endl<<endl<<"Enter Base : ";
    int base;
    cin>>base;
    cout<<"Enter Power : ";
    int index;
    cin>>index;
    int sol = power(base, index);
    cout<<endl<<"Solution of "<<base<<"^"<<index<<" : "<<sol<<endl;
    return 0;
}
