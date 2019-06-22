#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    
    ofstream outfile("demo.txt", _S_app);
    if(outfile.is_open())
    {
        outfile<<"YOYOYOYOYOOYOYOYOYOYOYOYOYOYOYOYOYO\n";
        outfile<<"BABYBABYBABYBABYBABYBABYBABYBABYBABY\n";
        outfile.close();
    }
    else
    {
        cerr<<"Couldn't open the file";
    }

    ifstream infile("demo.txt");
    string str;
    if(infile.is_open())
    {
        while (getline(infile, str))
        {
            cout<<str<<endl;       
        }
        infile.close();
    }
    return 0;
}
