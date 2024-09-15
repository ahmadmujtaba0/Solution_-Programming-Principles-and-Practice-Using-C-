#include<iostream>
using namespace std;

void accending_order(int arr[], int n) 
{
for (int i=0; i<n-1; i++) 
{
    int j=i+1;
    while (j<n) 
	{
        if (arr[i]>arr[j]) 
		{
            swap(arr[i], arr[j]);
        }
        j++;
    }
}
}

void decending_order(int arr[], int n)
{
	for (int i=0; i<n-1; i++)
    {
	int j=i+1;
	while( j<n)
	{
		if(arr[i]<arr[j])
		{
			swap(arr[i],arr[j]);
		}
		j++;
	}
    }
}

void display(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{

	int n=10;
	int arr[]={5,4,8,7,6,2,5,4,7,4};
	
	cout<<"array in input order:"<<endl;
	display(arr, n);
	cout<<endl;
	
	cout<<"array in accendong order:"<<endl;
	accending_order(arr, n);
	display(arr, n);
	cout<<endl;
		
	cout<<"array in decending order:"<<endl;
	decending_order(arr, n);
	display(arr, n);
	
	return 0;
}