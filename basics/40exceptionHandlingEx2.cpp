/*
    Standard Types of Exceptions in CPP
    
    1> std:exception
        1.1> std:bad_alloc
        1.2> std:bad_cast
        1.3> std:bad_typeid
        1.4> std:bad_exception
        1.5> std:logic_failure
            1.5.1> std:domain_error
            1.5.2> std:invalid_argument
            1.5.3> std:length_error
            1.5.4> std:out_of_range
        1.6> std:runtime_error
            1.6.1> std:overflow_error
            1.6.2> std:range_error
            1.6.3> std:underflow_error
*/

#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

float divs(float x, float y)
{
    float z;
    if(y==0.0)
    {
        throw "\nDivision by Zero Error";
    }
    else
    {
        z = x/y;
        return z;
    }
    
}
int main(int argc, char const *argv[])
{
    float x, y, z;
    while (1)
    {
        try{
            fflush(stdin);
            cout<<endl<<"Enter First Number : ";
            cin>>x;
            cout<<"Enter Second Number : ";
            cin>>y;
            z = divs(x, y);
            cout<<endl<<z;
        }
        catch(const char *e)
        {
            cerr<<e;
        }
    }    
    return 0;
}
