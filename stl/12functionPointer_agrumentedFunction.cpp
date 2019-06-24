#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int add(int a, int b)
{
    
    return a+b;
}

int main(int argc, char const *argv[])
{
    int a,b,c;
    cout<<"Enter A : ";
    cin>>a;
    cout<<"Enter B : ";
    cin>>b;
    
    int(*funptr)(int, int);
    funptr = &add;
    c = funptr(a, b);
    cout<<"Sum of "<<a<<" and "<<b<<" is : "<<c;
    return 0;
}
