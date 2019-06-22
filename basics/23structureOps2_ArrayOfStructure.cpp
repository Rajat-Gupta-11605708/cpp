#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
struct Student  //Structures in CPP needs Access Specifiers. It has only Public and Private. By Default is Public
{             
    public:
        string name, ph;
        int marks, rollno;
    public:
        void insert()
        {
            fflush(stdin);
            cout<<endl<<endl<<"Enter Name : ";
            getline(cin, name);
            cout<<"Enter Phone Number : ";
            getline(cin, ph);
            cout<<"Enter Roll Number : ";
            cin>>rollno;
            cout<<"Enter Marks : ";
            cin>>marks;
            fflush(stdin);
        }
        void display()
        {
            cout<<"\n\nName of Student : "<<name;
            cout<<"\nRoll Number : "<<rollno;
            cout<<"\nPhone Number : "<<ph;       
            cout<<"\nMarks : "<<marks;
        }
};

int main(int argc, char const *argv[])
{
    struct Student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        s[i].insert();
    }
    for(i=0;i<5;i++)
    {
        s[i].display();
    }
    return 0;
}
