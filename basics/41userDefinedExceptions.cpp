#include<iostream>
#include<exception>
#include<stdio.h>
#include<string>
using namespace std;

class MyException : public exception
{
    public:
        const char* what() const throw()
        {
            return "Attempted to divide by Zero";
        }
};

int main(int argc, char const *argv[])
{
    try
    {
        int x,y;
        cout<<"Enter Two Numbers : ";
        cin>>x>>y;
        if(y==0)
        {
            MyException z;
            throw z;
        }
        else
        {
            cout<<"x/y = "<<x/y<<endl;
        }
        
    }
    catch(exception& e)
    {
        cerr << e.what() << '\n';
    }
    
    return 0;
}
