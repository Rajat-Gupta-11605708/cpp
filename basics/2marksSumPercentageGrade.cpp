#include<iostream>
using namespace std;

main()
{
    float s1,s2,s3,s4,s5;
    cout<<"Enter Marks of Subject 1 : ";
    cin>>s1;
    cout<<"\nEnter Marks of Subject 2 : ";
    cin>>s2;
    cout<<"\nEnter Marks of Subject 3 : ";
    cin>>s3;
    cout<<"\nEnter Marks of Subject 4 : ";
    cin>>s4;
    cout<<"\nEnter Marks of Subject 5 : ";
    cin>>s5;

        float sum = s1+s2+s3+s4+s5;

        float percentage = (sum/500)*100;
        cout<<"\n\nSum = "<<sum;
        cout<<"\nPercentage = "<<percentage<<"%";

        if (percentage>75)
            cout<<"\nGrade = A+";
        else if (percentage>70 && percentage <=75)
            cout<<"\nGrade = A";
        else if (percentage>68 && percentage <=70)
            cout<<"\nGrade = B+";
        else if (percentage>65 && percentage <=68)
            cout<<"\nGrade = B+";
        else
            cout<<"\nGrade = C";

}
