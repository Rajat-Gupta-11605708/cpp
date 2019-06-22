#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, z;
    while(1)
    {
        cout<<"Enter X : ";
        cin>>x;
        cout<<"Enter Y : ";
        cin>>y;
        z = x/y;
        cout<<"\nZ = "<<z;
        cout<<endl<<"\n\n\t\t\t\t\t-------------------EOP-----------------------";
    }
    return 0;
}
