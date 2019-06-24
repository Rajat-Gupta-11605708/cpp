#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque <int> v, v1;
    int size, data, p=1, k=0;
    int i, j;
    cout<<"Enter Size of Deque : ";
    cin>>size;    
    for(i=0;i<size;i++)
    {
        cout<<"Enter Element number "<<i+1<<" : ";
        cin>>data;
        v.push_back(data);
    }
    sort(v.begin(), v.end());
    cout<<"After Sorting : ";
    for(i=0;i<size;i++)
    {
        cout<<v.at(i)<<" ";
    }

    for(i=0;i<v.size();i++)
    {
        if(v[i+1]-v[i]==1)
        {
            p+=1;
        }
        else
        {
            v1.push_back(p);
            p=1;
        }
    }

    for(i=0;i<v1.size();i++)
    {
        if(v1[i]==1)
        {
            v1[i]=0;
        }
    }
    
    

    return 0;
}
