#include "str.cpp"
#include "reverse.cpp"
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter a String : ";
    string str;
    getline(cin, str);
    stringReplacement(str);
    stringReverse(str);
    return 0;
}
