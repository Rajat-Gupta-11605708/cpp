/*
    _S_bin	        binary	Operations are performed in binary mode rather than text.
    _S_ate	        at end	The output position starts at the end of the file.
    _S_app	        append	All output operations happen at the end of the file, appending to its existing contents.
    _S_trunc	    truncate	Any contents that existed in the file before it is open are discarded.
*/

#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream filestream ("demo.txt", _S_app);
    if(filestream.is_open())
    {
        filestream<<"Welcome to File Handling.....\nI Love\n";
        filestream<<"C++ Programming.\n";
        filestream.close();
    }
    else
    {
        cout<<"\nCan't open File";
    }
    
    return 0;
}
