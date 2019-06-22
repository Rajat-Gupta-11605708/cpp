#include<iostream>
using namespace std;
main()
{
    int start, ending, ecount, ocount, i;
    cout<<"Enter Starting Range Point : ";
    cin>>start;
    cout<<"Enter Ending Range Point : ";
    cin>>ending;
    for(i=start;i<=ending;i++)
    {
        if (i%2==0)
        {
            ecount+=1;
        }
        else
        {
            ocount+=1;
        }
    }
    cout<<"Total Count of Even Numbers : "<<ecount;
    cout<<"\nTotal Count of Odd Numbers : "<<ocount;
    return 0;
}
