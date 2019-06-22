#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    ifstream f("demo.txt");
    if(f.is_open())
    {
        while (getline(f, str))
        {
            cout<<str<<endl;
        }
        f.close();
    }
    else
    {
        cout<<"\nFile Not Present";
    }
    
    return 0;
}
