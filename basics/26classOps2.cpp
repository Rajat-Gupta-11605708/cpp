#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Time{

    int min, hr;
    public:
        void insertTime()
        {
            cout<<"Enter Time in hr min : ";
            cin>>hr>>min;
        }

        void showTime()
        {
            cout<<"\n"<<hr<<" : "<<min;
        }

        Time addTime(Time obj)
        {
            Time temp;
            temp.min = obj.min+min;
            temp.hr = obj.hr+hr;
            if(temp.min>59)
            {
                temp.min-=60;
                temp.hr+=1;
            }
            return temp;
        }
};
int main(int argc, char const *argv[])
{
    Time t1, t2, t3;
    t1.insertTime();
    t2.insertTime();
    t3 = t1.addTime(t2);
    t3.showTime();
    return 0;
}
