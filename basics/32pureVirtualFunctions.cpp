#include<iostream>
#include<stdio.h>
using namespace std;

class Task                  //Abstract Base Class (contains only pure virtual functions)
{
    public:
        virtual void input()=0;
        virtual void calc()=0;
};

class Triangle : public Task
{
    int base, height;
    public:
        void input()
        {
            cout<<"Enter Base : ";
            cin>>base;
            cout<<"Enter Height : ";
            cin>>height;
        }
        void calc()
        {
            cout<<"Area of Triangle : "<<base*height*0.5;
        }
};

class Circle : public Task
{
    float radius;
    public:
        void input()
        {
            cout<<"\nEnter Radius : ";
            cin>>radius;
        }
        void calc()
        {
            cout<<"Area of Circle of Radius  : "<<3.147*radius*radius;
        }
};
int main(int argc, char const *argv[])
{
    Triangle t;             //Via Early Binding
    t.input();
    t.calc();

    Circle c;               //Via Late Binding ; Same output but different approach of implementation
    Task *ptr;
    ptr = &c;
    ptr->input();
    ptr->calc();
    return 0;
}
