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

    d2.push_back(5);
    d2.push_back(6);
    d2.push_back(7);
    d2.push_back(8);

    deque<string> d3;
    d3.push_back("Hello");
    d3.push_back("World");
    
    deque<int>::iterator itr;
    itr = d1.begin();

    d3.insert(d3.end(), d1.begin(), d1.end());      //runtime error will happen
    
    deque<string>::iterator itrs;
    itrs = d3.begin();

    for(itrs = d3.begin(); itrs!=d3.end();++itr)
    {
        cout<<*itr<<"\t";
    }
    return 0;
}
