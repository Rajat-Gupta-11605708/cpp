#include<iostream>
#include<stdio.h>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"\nConstructor of Base";
        }
        ~A()
        {
            cout<<"\nDestructor of Base";
        }
};

class B : public A
{
    public:
        B()
        {
            cout<<"\nConstructor of Derived";
        }
        ~B()
        {
            cout<<"\nDestructor of Derived";
        }
};

int main(int argc, char const *argv[])
{
    B b;
    return 0;
}
