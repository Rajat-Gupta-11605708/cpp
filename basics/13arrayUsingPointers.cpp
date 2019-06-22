#include<iostream>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int size, i;
    while (1)
    {
        cout<<"Enter Size of Array : ";
        cin>>size;
        if(size>0 && size<=100)
            break;
    }
    int arr[size];
    cout<<"Enter Values of Array : ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Accessing Values of Array using Pointers : ";
    for(i=0;i<size;i++)
    {
        cout<<*(arr+i);
        cout<<"\t";
    }
    cout<< *arr+10;     //Adding 10 to first value of Array
    cout<<*(arr+100);   //prints garbage value
    return 0;
}
