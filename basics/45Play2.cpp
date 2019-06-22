#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;

class Student
{
    string rn, name, ph, email;
    int cta, ctd, i;
    public:
        void getnameRN()
        {
            fflush(stdin);
            cout<<"\nEnter Name : ";
            getline(cin, name);
            cout<<"Enter Roll No. : ";
            getline(cin, rn);
        }
        void getphone()
        {
            fflush(stdin);
            cout<<"\nEnter Phone Number : ";
            getline(cin, ph);
            try
            {  
                if(ph.size()!=10)
                {
                    throw "\nPhone Number Invalid, Please Enter 10 digit Number";
                }
                else
                {
                    ph=ph;
                }
                
            }
            catch(const char* e)
            {
                cerr << e;
                getphone();
            }
        }

        void getMail()
        {
            fflush(stdin);
            cta=0;
            ctd=0;
            cout<<"\nEnter Email Address : ";
            getline(cin, email);
            try
            {
                for(i=0;i<email.size();i++)
                {
                    if(email[i]=='@')
                    {
                        cta+=1;
                    }
                    if(email[i]=='.')
                    {
                        ctd+=1;
                    }
                }
                if(cta!=1 || ctd<1)
                {
                    throw "\nEnter Valid Email Address";
                }
                else
                {
                    email=email;
                }
            }
            catch(const char* e)
            {
                cerr<<e;
                getMail();
            }
            
        }
        void inputToFile()
        {
            ofstream f("Student.txt", _S_app);
            f<<name<<" "<<rn<<" "<<ph<<" "<<email<<"\n";

        }
};

int main(int argc, char const *argv[])
{
    int n, i;
    cout<<"Number of Students : ";
    cin>>n;
    Student s[n];
    for(i=0;i<n;i++)
    {
        s[i].getnameRN();
        s[i].getphone();
        s[i].getMail();
        s[i].inputToFile();
    }
    
    
    return 0;
}
