/*
                            A
                          /   \
                         /     \
                        B       C
                         \     /
                          \   /
                            D

                    Creates Ambuity Error
 */
#include<iostream>
#include<stdio.h>
using namespace std;

class A
{
    public:
        void showa()
        {
            cout<<"\nIn Class A";
        }
};
class B : virtual public A
{
    public:
        void showb()
        {
            cout<<"\nIn Class B";
        }
};
class C : virtual public A
{
    public:
        void showc()
        {
            cout<<"\nIn Class C";
        }
};
class D : public B, public C
{
    public:
        void showd()
        {
            cout<<"\nIn Class D";
        }
};

int main(int argc, char const *argv[])
{
    D d;
    d.showd();
    d.showc();
    d.showb();
    d.showa();
    return 0;
}
