#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> v1;
    v1.push_back("First Element\t");
    v1.push_back("Second Name\t");
    v1.push_back("Third Element\t");
    for(vector<string>::iterator itr = v1.begin(); itr!=v1.end(); ++itr)        //accesing vector by iterator cuz vectors cannot be accesed by indices
    {
        cout<<*itr;
    }
    cout<<"\n\n\nAfter Deleting Last Element\n\n";
    v1.pop_back();                                                  //deleting last element
    for(vector<string>::iterator itr = v1.begin(); itr!=v1.end(); ++itr)        
    {
        cout<<*itr;
    }


    return 0;
}
