#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int ct;
struct Demo{
    public:
        int x, y;
    public:
        Demo()
        {
            x=0;
            y=0;
            cout<<"Demo for "<<ct+1<<" Variabe\n";
            ct++;
        }
        Demo(int a, int b)
        {
            x=a;
            y=b;
        }
        void show()
        {
            cout<<"x = "<<x;
            cout<<"\ny = "<<y;
            cout<<endl;
        }
};
int main(int argc, char const *argv[])
{
    struct Demo d1;
    d1.show();
    struct Demo d2(2, 3);
    d2.show();
    struct Demo d3 = Demo(4, 5);
    d3.show();
    return 0;
}
