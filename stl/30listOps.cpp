#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

list<string> ls;

int main(int argc, char const *argv[])
{
    int size, i;
    string temp;
    fflush(stdin);
    cout<<"Enter Size of list : ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        cout<<"Enter a String : ";
        getline(cin, temp);
        ls.push_back(temp);
        cout<<endl;
    }
    cp:
    cout<<"\nType a String to Find and Delete : ";
    fflush(stdin);
    getline(cin, temp);
    
    list<string>::iterator itr;
    int flag=1;
    for(itr = ls.begin(); itr != ls.end(); ++itr)
    {
        if (*itr == temp)
        {   
            cout<<"\n\nElement Found and Erase Successfully";
            ls.erase(itr);
            flag=1;
            break;
        }
        else
        {
            flag = 0;
        }
        
    }
    if(flag==0)
    {
        cout<<"\nSorry Element Not Found";
        cout<<"\n\nElements Are  : ";
        for(itr = ls.begin(); itr != ls.end(); ++itr)
        {
            cout<<*itr<<"\t";
        }
        goto cp;
    }
    else
    {
        cout<<"\n\nAfter Deletion : ";
        for(itr = ls.begin(); itr != ls.end(); ++itr)
        {
            cout<<*itr<<"\t";
        }
    }
    
    return 0;
}
