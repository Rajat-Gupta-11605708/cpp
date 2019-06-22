#include<iostream>
#include<string>
using namespace std;

void stringReverse(string strs)
{
    char temp;
    int j = strs.size()-1;
    for(int i=0 ; i<j ; i++, j--)
    {
        temp = strs[i];
        strs[i]=strs[j];
        strs[j]=temp;
    }
    cout<<"\nReversed String : "<<strs;
}