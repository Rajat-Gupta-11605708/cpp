#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

main()
{
    int a=10;
    int *ptr;
    ptr = &a;
    cout<<"ptr -> a = "<<*ptr;
    int **p;
    p=&ptr;
    cout<<"\n**p -> *ptr = "<<**p;
    cout<<"\nAddress of ptr via p= "<<*p;
    cout<<"\nAddress of ptr via ptr  = "<<&ptr;
    cout<<"\nAddress of a via p= "<<p;
    cout<<"\nAddress of a via ptr= "<<ptr;
    cout<<"\nAddress of a via a  = "<<&a;
}