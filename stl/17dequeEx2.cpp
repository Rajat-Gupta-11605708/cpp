#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> deq;
    deque<int>::iterator itr;
    deq.assign(5, 6);
    for(itr = deq.begin(); itr!= deq.end();++itr)
        cout<<*itr<<" ";
    return 0;
}
