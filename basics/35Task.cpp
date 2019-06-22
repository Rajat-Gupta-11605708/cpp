#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class Abs
{
    public:
        virtual void input() = 0;
        virtual void no() = 0;
        virtual void rev() = 0;
        virtual void prime() = 0;
        virtual void evenOdd() = 0;
};

class Imp : public Abs
{
    int n, ct, temp, revs, flag, k, range, i;

    public:
        void input()
        {
            cout<<"Enter a Number : ";
            cin>>n;
            temp=n;
        }

        void no()
        {
            ct=0;
            cout<<"\nNo. of Digits : ";
            if (n>9)
            {
                while(temp>0)
                {
                    ct++;
                    temp/=10;
                }
                cout<<ct;
            }
            else
            {
                cout<<ct;
            }
            temp=n;
        }

        void rev()
        {
            revs=0;
            cout<<"\nReverse : ";
            if(n>9)
            {
                while (temp>0)
                {
                    k = temp%10;
                    revs = revs*10+k;
                    temp/=10;
                }
                cout<<revs;
            }
            else
            {
                cout<<"0";
            }
            
            temp = n;
        }

        void prime()
        {
            cout<<"\nNumber is : ";
            flag=0;
            range = pow(temp, 0.5);
            for(i=2;i<range;i++)
            {
                if(n%i==0)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                cout<<"Prime";
            }
            else
            {
                cout<<"Not Prime";
            }
            
        }

        void evenOdd()
        {
            cout<<"\nNumber is : ";
            if(n%2==0)
            {
                cout<<"Even";
            }
            else
            {
                cout<<"Odd";
            }
            
        }
};

int main(int argc, char const *argv[])
{
    Imp im;
    im.input();
    im.no();
    im.rev();
    im.prime();
    im.evenOdd();
    return 0;
}
