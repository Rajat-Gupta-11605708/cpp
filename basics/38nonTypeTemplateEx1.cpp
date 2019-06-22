#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

template<class T, int size>

class Demo
{
    T arr[size];
    int i;
    public:
        void insert()
        {
            for(i=0;i<size;i++)
            {
                cout<<"Enter Value of Arr["<<i<<"] : ";    
                cin>>arr[i];
            }
        }

        void display()
        {
            cout<<endl<<"Array is : ";
            for(i=0;i<size;i++)
            {
                cout<<arr[i]<<"\t";
            }
        }
};

int main(int argc, char const *argv[])
{
    Demo<int, 5> intobj;
    intobj.insert();
    intobj.display();
    cout<<endl;
    Demo<string, 2> strobj;
    strobj.insert();
    strobj.display();
    return 0;
}
