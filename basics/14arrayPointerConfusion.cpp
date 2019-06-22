#include<iostream>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};
    int i=5;
    int *ptr = a+1;
    cout<<endl<<" Array   : "<<a;
    cout<<endl<<" Array 1 : "<<a+1;
    cout<<endl<<" Array 2 : "<<a+2;
    cout<<endl<<" Array 3 : "<<a+3;
    cout<<"\n PTR : "<<ptr<<endl;
    return 0;
}
