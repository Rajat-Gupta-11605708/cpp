#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v1, v2;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
    v2.push_back(10);

    v1.insert(v1.end(), v2.begin(), v2.begin()+5);

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }

    return 0;
}