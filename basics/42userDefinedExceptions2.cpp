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
            return "More than 7 Vowels in String";
        }
};

int main(int argc, char const *argv[])
{
    string str;
    cout<<"\nEnter a String : ";
    getline(cin, str);
    int ct=0, i;
    for(i==0;i<str.size();i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            ct+=1;
        }
    }
    try
    {
        if(ct>7)
        {
            MyException e;
            throw e;
        }
        else
        {
            cout<<str;
        }
    }
    catch(exception& e)
    {
        cerr << e.what() << '\n';
    }
    
    return 0;
}
