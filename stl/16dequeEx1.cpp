#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> first, second;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);
    first.push_back(5);
    first.push_back(6);
    deque<int>::iterator itr;
    second.assign(first.begin()+2, first.end()-1); 
    for(itr = second.begin(); itr!= second.end();++itr)
        cout<<*itr<<" ";
    return 0;
}
