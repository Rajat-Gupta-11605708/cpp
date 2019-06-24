#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

deque<string> ds;

int main(int argc, char const *argv[])
{
    int size, i;
    string temp;
    fflush(stdin);
    cout<<"Enter Size of Deque : ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        cout<<"Enter a String : ";
        getline(cin, temp);
        ds.push_back(temp);
        cout<<endl;
    }

    cout<<"\nType a String to Find and Delete : ";
    fflush(stdin);
    getline(cin, temp);
    
    deque<string>::iterator itr;
    int flag=1;
    for(itr = ds.begin(); itr != ds.end(); ++itr)
    {
        if (*itr == temp)
        {   
            cout<<"\n\nElement Found and Erase Successfully";
            ds.erase(itr);
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
        for(itr = ds.begin(); itr != ds.end(); ++itr)
        {
            cout<<*itr<<"\t";
        }
    }
    else
    {
        cout<<"\n\nAfter Deletion : ";
        for(itr = ds.begin(); itr != ds.end(); ++itr)
        {
            cout<<*itr<<"\t";
        }
    }
    
    return 0;
}
