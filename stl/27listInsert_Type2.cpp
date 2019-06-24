#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l1;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(6);

    list<int>::iterator itr = l1.begin();
    advance(itr, 2);
    l1.insert(itr, 3, 99);

    for(itr = l1.begin(); itr != l1.end(); ++itr)
    {
        cout<<*itr<<"\t";
    }
    return 0;
}
