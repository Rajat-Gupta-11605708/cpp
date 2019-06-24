#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

void add()
{
    int a, b;
    cout<<"Enter A : ";
    cin>>a;
    cout<<"Enter B : ";
    cin>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a+b;
}

int main(int argc, char const *argv[])
{
    void (*funptr)();
    
    funptr = &add;
    
    funptr();
    
    return 0;
}
