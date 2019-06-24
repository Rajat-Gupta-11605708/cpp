#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    vector<int> v1, v2;
    v1.push_back(11);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
    v2.push_back(10);

    cout<<"\nBefore Swapping, Elements of V1 are : ";
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\t";
    }
    cout<<"\nBefore Swapping, Elements of V2 are : ";
    for(i=0;i<v1.size();i++)
    {
        cout<<v2[i]<<"\t";
    }

    cout<<"\n";
    v1.swap(v2);        //use of swap function

    cout<<"\nAfter Swapping, Elements of V1 are : ";
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\t";
    }
    cout<<"\nAfter Swapping, Elements of V2 are : ";
    for(i=0;i<v1.size();i++)
    {
        cout<<v2[i]<<"\t";
    }

    return 0;

}
