#include<iostream>
#include<stdio.h>
using namespace std;

void largest(int arr[], int size)
{
	int i;
	int max = arr[0];
	for (i=0;i<size;i++)
	{
		if (arr[i]>max)
			max = arr[i];
	}
	cout<<"\n\nArray is ";
	for(i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<"\nMaximum Element : "<<max;
}

void smallest(int arr[], int size)
{
	int i;
	int min = arr[0];
	for (i=0;i<size;i++)
	{
		if (arr[i]<min)
			min = arr[i];
	}
	cout<<"\n\nArray is ";
	for(i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<"\nMinimum Element : "<<min;
}
void asc(int arr[], int size)
{
	int i, j, temp;
	cout<<"\n\nArray is ";
	for(i=0;i<size;i++)
		cout<<arr[i]<<" ";
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>=arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"\nArray in Ascending Order is ";
	for(i=0;i<size;i++)
		cout<<arr[i]<<" ";
	
}

void desc(int arr[], int size)
{
	int i, j, temp;
	cout<<"\n\nArray is ";
	for(i=0;i<size;i++)
		cout<<arr[i]<<" ";
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<=arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"\nArray in Descending Order is ";
	for(i=0;i<size;i++)
		cout<<arr[i]<<" ";
	
}

main()
{
	int size, i;
	while(1)
	{
		cout<<"Enter Size of Array : ";
		cin>>size;
		if(size>0 && size<=100)
		{
			break;	
		}
	}
	
	cout<<"Enter Elements : ";
	int arr[size];
	for(i=0;i<size;i++)
	{
		fflush(stdin);
		cin>>arr[i];
	}
	largest(arr, size);
	smallest(arr, size);
	asc(arr, size);
	desc(arr, size);
}
