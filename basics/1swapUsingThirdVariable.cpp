#include<iostream>
using namespace std;

int main()
{
    int a,b,c;                                              //Calculate Number of Variables
    cin>>a>>b;                                              //Inputting
    cout<<"\nBefore Swapping\n a = "<<a<<"\n b = "<<b;
    c=a;                                                    //Processing
    a=b;
    b=c;
    cout<<"\n\nAfter Swapping\n a = "<<a<<"\n b = "<<b;     //Outputting
    return 0;
}
