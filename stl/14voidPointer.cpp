#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

void increase(void *data, int ptrsize)
{
    if(ptrsize == sizeof(char))
    {   
        char *ptrchar;
        ptrchar = (char*)data;
        (*ptrchar)++;
        cout<<"*data points to char "<<"\n";
    }
    else if(ptrsize == sizeof(int))
    {
        int *ptrint;
        ptrint = (int *)data;
        (*ptrint)++;
        cout<<"*data points to int "<<"\n";
    }
}

void call()
{
    char c = 'x';
    int i = 10;
    increase(&c, sizeof(c));
    cout<<"New Value of c is : "<<c<<endl;
    increase(&i, sizeof(i));
    cout<<"New Value of i is : "<<i<<endl;
}

int main(int argc, char const *argv[])
{
    call();
    return 0;
}
