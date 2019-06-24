#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l1, l2;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(6);

    l2.push_back(7);
    l2.push_back(8);
    l2.push_back(9);
    l2.push_back(10);
    l2.push_back(11);
    l2.push_back(12);

    list<int>::iterator itr = l2.begin();
    ++itr;
    ++itr;
    l2.insert(l2.begin(), l1.begin(), l1.end());

    for(itr = l2.begin(); itr != l2.end(); ++itr)
    {
        cout<<*itr<<"\t";
    }
    return 0;
}
