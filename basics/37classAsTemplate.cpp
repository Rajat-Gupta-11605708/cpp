#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

template<typename T>
class swaps
{
    public:
        T a,b,temp;
        void assign(T a, T b)
        {
            this->a = a;
            this->b = b;
        }
        void operation()
        {
            cout<<endl<<"Before Swapping\n";
            cout<<"T a = "<<a;
            cout<<"\nT b = "<<b;

            temp=a;
            a=b;
            b=temp;

            cout<<endl<<"After Swapping\n";
            cout<<"T a = "<<a;
            cout<<"\nT b = "<<b;

            cout<<endl;
        }
};

int main(int argc, char const *argv[])
{
    swaps<int> s1;
    s1.assign(2, 3);
    s1.operation();

    swaps<string> s2;
    s2.assign("Hello", "World");
    s2.operation();

    swaps<char> s3;
    s3.assign('A', 'B');
    s3.operation();
    return 0;
}
