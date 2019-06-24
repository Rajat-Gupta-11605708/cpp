#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> v;
    int i;
    v.push_back("C++ Vector");
    string str = "Programs";
    v.insert(v.begin()+1, str);
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
