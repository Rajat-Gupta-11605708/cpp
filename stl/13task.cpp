#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int reverse(int **n)
{
    int temp, rev=0;
    while(**n>0)
    {
        //cout<<"N = "<<**n<<endl;
        temp = **n%10;
        //cout<<"temp = "<<temp<<endl;
        rev = (rev*10+temp);
        //cout<<"rev = "<<rev<<endl;
        **n /= 10;
    }
    return rev;
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int k = n;
    int *p;
    p = &n;
    int **ptr;
    ptr = &p;
    int (*fptr)(int **);
    fptr = &reverse;
    int rev = fptr(ptr);
    cout<<"Reverse of "<<k<<" is "<<rev;

    return 0;
}
