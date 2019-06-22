#include<iostream>
#include<stdio.h>
using namespace std;

class Base
{
    public:
        void show()
        {
            cout<<"\nIn Base Class";
        }
};

class Derived : public Base
{
    public:
        virtual void show()
        {
            cout<<"\nIn Derived Class";
        }
};

int main(int argc, char const *argv[])
{
    Derived obj;    //Early Binding;
    obj.show();

    Base *ptr;      //Late Binding;
    ptr = &obj;
    ptr->show();
    return 0;
}
