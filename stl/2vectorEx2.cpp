#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> menu;
    int ch;
    string item;
    while(true)
    {
        cout<<"\n1> Add Item to Menu\n2> Delete Latest Item from Menu\n3> See First Item of Menu\n4> See Last Item of Menu\n5> See Whole Menu\n\nEnter Your Choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            fflush(stdin);
            cout<<"Enter Item Name : ";
            getline(cin, item);
            item+="\t";
            menu.push_back(item);
        break;
        case 2:
            menu.pop_back();
        break;
        case 3:
            cout<<*(menu.begin());
        break;
        case 4:
            cout<<menu.at(menu.size()-1);
        break;
        case 5:
            if(menu.empty()==true)
            {
                cout<<"\nMenu is Empty !! Try adding some Items\n";
                break;
            }
            for(vector<string>::iterator itr = menu.begin();itr!=menu.end();++itr)
            {
                cout<<*itr;
            }
        break;
        default:
            break;
        break;
        }
    }
    return 0;
}
