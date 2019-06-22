#include<iostream>
#include<stdio.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout<<"Enter A : ";
    cin>>a;
    cout<<"Enter B : ";
    cin>>b;
    cout<<"\nBefore Swapping\nA : "<<a<<"\nB : "<<b;
    swap(&a, &b);
    cout<<"\nAfter Swapping\nA : "<<a<<"\nB : "<<b;
    return 0;
}
