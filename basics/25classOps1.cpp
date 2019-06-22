#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int flag=0;
class Student
{
    private:
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

        void show()
        {
            cout<<"\n\nName of Student : "<<name;
            cout<<"\nRoll Number : "<<rollno;
            cout<<"\nPhone Number : "<<ph;       
            cout<<"\nMarks : "<<marks;
        }

        void search(string name)
        {
            if(name == this->name)
            {
                flag=1;
            }
        }
};

int main(int argc, char const *argv[])
{
    Student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        s[i].insert();
    }
    for(i=0;i<3;i++)
    {
        s[i].show();
    }
    cout<<"\nEnter a Name to be searched : ";
    string name;
    getline(cin, name);
    int x;
    for(i=0;i<3;i++)
    {
        s[i].search(name);
    }
    if (flag==1)
    {
        cout<<"\nRecord Found !!!";
    }
    else
    {
        cout<<"\nRecord Not Found";
    }
    
    return 0;
}
