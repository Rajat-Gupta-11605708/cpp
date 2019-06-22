#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

template<typename T>
void swap(T a, T b)
{
    cout<<endl<<"Before Swapping\n";
    cout<<"T a = "<<a;
    cout<<"\nT b = "<<b;

    T temp;
    temp=a;
    a=b;
    b=temp;

    cout<<endl<<"After Swapping\n";
    cout<<"T a = "<<a;
    cout<<"\nT b = "<<b;
}

int main(int argc, char const *argv[])
{
    swap("str", "name");
    swap(20, 30);
    swap('a', 'b');
    swap(10.10, 20.20);
    return 0;
}
