#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class A
{
    private:
        int a,b;
    public:
        void input()
        {
            cout<<"Enter A : ";
            cin>>a;
            cout<<"Enter B : ";
            cin>>b;
        }
        void show()
        {
            cout<<"\n"<<"A : "<<a;
            cout<<"\n"<<"B : "<<b;
        }
};

class B
{
    private:
        int x,y;
        
    public:
        A *obj;
        B(A *obj)
        {
            this->obj = obj;
        }
        void input1()
        {
            cout<<"\n\nEnter X : ";
            cin>>x;
            cout<<"Enter Y : ";
            cin>>y;
        }
        void show1()
        {
            cout<<"\n"<<"X : "<<x;
            cout<<"\n"<<"Y : "<<y;
        }
};

int main(int argc, char const *argv[])
{
    A obj;
    obj.input();
    B obj1(&obj);
    obj1.obj->show();

    obj1.input1();
    obj1.show1();
    return 0;
}
