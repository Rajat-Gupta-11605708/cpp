#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<string> lang;
    lang.push_back("java");
    lang.push_back(".net");
    lang.push_back("C++");

    deque<string>::iterator itr = lang.begin();
    ++itr;
    lang.insert(itr, "C++");    //insert(iterator, value);

    for(itr = lang.begin(); itr!=lang.end();++itr)
    {
        cout<<*itr<<"\t";
    }
    return 0;
}
