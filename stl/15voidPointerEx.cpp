#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;

void swaps(void *a, void *b, int psize)
{
    if(psize == sizeof(int))
    {  
        cout<<"Void pointer points to Int\n";
        int *x, *y ,temp;
        x = (int *)a;
        y = (int *)b;
        cout<<"Before Swapping A = "<<*x<<" B = "<<*y<<endl;
        temp = *x;
        *x = *y;
        *y = temp;
        cout<<"After Swapping A = "<<*x<<" B = "<<*y<<endl;
    }

    else if(psize == sizeof(char))
    {  
        cout<<"Void pointer points to Char\n";
        char *x, *y ,temp;
        x = (char *)a;
        y = (char *)b;
        cout<<"Before Swapping A = "<<*x<<" B = "<<*y<<endl;
        temp = *x;
        *x = *y;
        *y = temp;
        cout<<"After Swapping A = "<<*x<<" B = "<<*y<<endl;
    }

}

void driver()
{
    char c1 = 'R';
    char c2 = 'S';
    int a1 = 17;
    int a2 = 03;
    swaps(&c1, &c2, sizeof(c1));
    swaps(&a1, &a2, sizeof(a1));
}
int main(int argc, char const *argv[])
{
    driver();
    return 0;
}
