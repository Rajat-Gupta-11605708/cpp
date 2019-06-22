#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int flag;
int index=0;
class Address
{
    public:
        string hno, landmark, city, pin;

        void input()
        {
            fflush(stdin);
            cout<<"Enter House Number : ";
            getline(cin, hno);
            cout<<"Enter City         : ";
            getline(cin, city);
            cout<<"Enter PIN          : ";
            getline(cin, pin);
            cout<<"Enter Landmark     : ";
            getline(cin, landmark);
            cout<<endl;
        }

        void display()
        {
            cout<<"\nAddress          : "<<hno<<", "<<city<<", "<<landmark<<", "<<pin<<".";
        }
};

class Student
{
    private:
        Address *obj;
        string name, email, phone;
    public:
        Student()
        {
            
        }
        Student(Address *obj)
        {
            this->obj = obj;
        }
        void Insert()
        {
            fflush(stdin);
            cout<<"Enter Name of Student : ";
            getline(cin, name);
            cout<<"Enter Email           : ";
            getline(cin, email);
            cout<<"Enter Phone           : ";
            getline(cin, phone);
            cout<<endl;
        }
        void show()
        {
            cout<<"\n\n\nName of Student  : "<<name;
            cout<<"\nEmail Address    : "<<email;
            cout<<"\nPhone Number     : "<<phone;
            obj->display();
        }
        void search(string name)
        {
            if (name==this->name)
            {
                flag=1;
            }
        }
};

int main(int argc, char const *argv[])
{
    int i;
    Address a[3];
    Student s[3];
    for(i=0;i<3;i++)
    {
        a[i].input();
        s[i] = Student(&a[i]);
        s[i].Insert();
    }
    for(i=0;i<3;i++)
    {
        s[i].show();
    }
    cout<<"\n\n\nEnter a Name to Search : ";
    string name;
    getline(cin, name);
    int k=0;
    for(i=0;i<3;i++)
    {
        s[i].search(name);
        if(flag!=1)
        {
            index++;
        }
        else
        {
            break;
        }
    }
    if(flag==1)
    {
        cout<<"\nData Found !!!!\n\n";
        s[index].show();
    }
    else
    {
        cout<<"\nSorry Data Not Found !";
    }
    
    return 0;
}
