//There is no concept of base and derrived structures.
/*
    If we Want to implement Inheritance, just make a variable of class whom you want
    to be inherited.
    As Structures are Compile Time entities until their variables doesn't made in main function,
    so in below example, in Structure B, we've made a variable of A it doesn't makes B as Runtime entity as so far.
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

struct A
{
    public:
        int a, b;
    public:
        void insert()
        {
            cout<<endl<<"Enter Value of A : ";
            cin>>a;
            cout<<"Enter Value of B : ";
            cin>>a;
        }
        void display()
        {
            cout<<endl<<"A : "<<a;
            cout<<"B : "<<b;
        }
};

struct B
{
    public:
        int x, y;
        struct A a;
    public:
        void input()
        {
            cout<<endl<<"Enter Value of X : ";
            cin>>x;
            cout<<"Enter Value of Y : ";
            cin>>y;
        }
        void view()
        {
            cout<<endl<<"X : "<<x;
            cout<<"Y : "<<y;
        }
};

int main(int argc, char const *argv[])
{
    struct B b;
    b.input();
    b.view();
    b.a.insert();
    b.a.display();
    return 0;
}
