#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class A
{
    public:
        string str;
    public:
        void input()
        {
            cout<<"Enter a String : ";
            getline(cin, str);
        }
        void display()
        {
            cout<<"String is : "<<str;
        }
};

class B
{
    private:
        int i;
        A *obj;
    public:
        
        B(A *obj)
        {
            this->obj = obj;
        }
        void replaceChar()
        {
            cout<<"\n\n\n"<<"After Replacement"<<endl;
            for(i=0;i< obj->str.length();i++)
            {
                if ((obj->str[i]=='O')||(obj->str[i]=='o')||(obj->str[i]=='0'))
                {
                    obj->str[i]='_';
                }
            }
        }
        void display1()
        {
            obj->display();
        }
};

int main(int argc, char const *argv[])
{
    A obj;
    obj.input();
    obj.display();
    B obj1(&obj);
    obj1.replaceChar();
    obj1.display1();
    return 0;
}
