#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> first, second;
    first.push_front(1);
    first.push_front(2);
    first.push_front(3);
    first.push_back(4);
    first.push_back(5);
    first.push_back(6);
    deque<int>::iterator itr;
    for(itr = first.begin(); itr!= first.end();++itr)
        cout<<*itr<<" ";
    return 0;
}
