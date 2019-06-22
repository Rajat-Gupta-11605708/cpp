#include<iostream>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int size, i, j;
    cout<<"Size of Array : ";
    cin>>size;
    int a[size][size], b[size][size], c[size][size];
    cout<<"Enter Elements of A\n";
    fflush(stdin);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            c[i][j]=0;
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
            if (i==j)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
            else if((i==0 && j== size-1)||(i==size-1&&j==0))
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
    }

    int mean = size/2;              //Calculating Mean Size for Inner Block
    if(size%2 != 0)
    {
        mean+=1;
    }
    for(i=1;i<mean+1;i++)
    {
        for(j=1;j<mean+1;j++)
        {
            if(i==j)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
            else if((i==1&&j==mean)||(i==mean&&j==1))
            {
                c[i][j]=a[i][j]+b[i][j];
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

    return 0;
}