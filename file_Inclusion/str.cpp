#include<iostream>
#include<string>
using namespace std;

void stringReplacement(string strs)
{
    int i;
    for(i=0;i<strs.size();i++)
    {
        if(strs[i]=='a'||strs[i]=='e'||strs[i]=='i'||strs[i]=='o'||strs[i]=='u')
        {
            strs[i]='_';
        }
    }
    cout<<"\nReplaced String is : "<<strs;
}