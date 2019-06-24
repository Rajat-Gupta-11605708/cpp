//Implementation of vector.data()
#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

main()
{
    int i;
    vector<int> v;
    for(i=1;i<11;i++)
    {
        v.push_back(i);
    }

    int *pos = v.data();

    for(i=0;i<v.size();i++)
    {
        cout<<*pos++<<"\t";
    }
    return 0;
}