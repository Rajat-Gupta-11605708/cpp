#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> lang;
    lang.push_back(1);
    lang.push_back(2);
    lang.push_back(3);

    deque<int>::iterator itr = lang.begin();
    lang.insert(itr, 3, 5);    //insert(iterator, number of times value will be inserted, value);

    for(itr = lang.begin(); itr!=lang.end();++itr)
    {
        cout<<*itr<<"\t";
    }
    
    return 0;
}
