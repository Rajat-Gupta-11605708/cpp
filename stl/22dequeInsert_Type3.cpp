#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> d1;
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);

    deque<int> d2;
    d2.push_back(4);
    d2.push_back(5);
    d2.push_back(6);


    
    d2.insert(d2.end(), d1.begin(), d1.end());    //insert(position where to insert a range of elements, initial position of range, end position of range);

    deque<int>::iterator itr;

    for(itr = d2.begin(); itr!=d2.end();++itr)
    {
        cout<<*itr<<"\t";
    }
    
    return 0;
}
