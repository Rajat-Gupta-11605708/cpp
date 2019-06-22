#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int size=3, i, j;
    int a[size][size], b[size][size], c[size][size];
    cout<<"Enter Elements of A\n";
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<"Enter Value of A["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    }
    cout<<"Enter Elements of B\n";
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<"Enter Value of B["<<i<<"]["<<j<<"] : ";
            cin>>b[i][j];
        }
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==j)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
            else if((i==0 && j== size-1)||(i==size-1&&j==0))
            {
                c[i][j]=a[i][j]+b[i][j];
            }
            else
            {
                c[i][j]=0;
            }
            
        }
    } 

    cout<<"Final Array is \n";
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}