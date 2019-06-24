/*
    begin()     – Returns an iterator pointing to the first element in the vector
    end()       – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    rbegin()    – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    rend()      – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/
#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

int main() 
{ 
    vector<int> v; 
    for (int i = 1; i <= 5; i++) 
        v.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i) 
        cout << *i << " "; 

    cout << "\nOutput of rbegin and rend: "; 
    for (vector<int>::reverse_iterator ir = v.rbegin(); ir != v.rend(); ++ir) 
        cout << *ir << " ";   
    return 0; 
} 
