#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int evens[] = {2, 4, 6, 8, 10};
    set<int> s (evens, evens+5);
    int size = s.size();
    cout<<"Size of Set is : "<<size;
    return 0;
}