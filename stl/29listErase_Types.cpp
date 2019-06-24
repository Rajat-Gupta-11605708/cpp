// Erase -> with position
// Erase -> with range

#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> d1, d2;
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);
    d1.push_back(4);

    list<int>::iterator itr, itr2;
    itr = d1.begin();
    ++itr;
    d1.erase(itr);      //positional erase

    for(itr = d1.begin(); itr!=d1.end();++itr)
    {
        cout<<*itr<<"\t";
    }

    d2.push_back(5);
    d2.push_back(6);
    d2.push_back(7);
    d2.push_back(8);
    itr = d2.begin();
    advance(itr, 1);
    itr2 = d2.end();
    d2.erase(itr, itr2);
    cout<<endl<<endl;
    for(itr = d2.begin(); itr!=d2.end();++itr)
    {
        cout<<*itr<<"\t";
    }
}