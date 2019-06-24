#include <bits/stdc++.h>
using namespace std;
	
	main()
	{
		vector<int> v;
		vector<int> v1;
		int size,data,p=1,k=0;
		cout<<"\nENter the size of the vector: ";
		cin>>size;
		for(int i=0;i<size; i++)
		{
			cout<<"\nEnter the element "<<i+1<<":";
			cin>>data;
			v.push_back(data);
		}
		sort(v.begin(),v.end());
		cout<<"\n After sorting the vector: ";
		for(int i=0;i<v.size(); i++)
		{
			cout<<v.at(i)<<" ";
		}
		
		for(int i=0;i<v.size();i++)
		{
			
			if(v[i+1]-v[i]==1)
			{
				p=p+1;
			}
			else{
				v1.push_back(p);
				p=1;
			}
		}
		
		for(int i=0;i<v1.size();i++)
		{
			if(v1[i]==1)
			v1[i]=0;
		}
		cout<<"\n";
		for(int i=0;i<v1.size();i++)
		{
			cout<<v1[i]<<" ";
		}
		int firstvector=0;
	for(int l=0;l<v1.size();l++)
	{	if(v1[l]==0){
	
		firstvector++;
		continue;
		}
		int len=firstvector+v1[l];
		cout<<endl;
		for(int j=firstvector;j<len;j++)
		{
			cout<<v[firstvector]<<" ";
			firstvector++;
		}
	}	
		}
	

