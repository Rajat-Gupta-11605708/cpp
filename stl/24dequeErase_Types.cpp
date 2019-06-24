// Erase -> with position
// Erase -> with range

#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> d1, d2;
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);
    d1.push_back(4);

    deque<int>::iterator itr;
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

    d2.erase(d2.begin()+2, d2.end());
    cout<<endl<<endl;
    for(itr = d2.begin(); itr!=d2.end();++itr)
    {
        cout<<*itr<<"\t";
    }
}