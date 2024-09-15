#include<iostream>
using namespace std;

void arrInput(int **arr, int row, int col)
{
	cout<<"enter elements of 2d array: "<<endl;
	for(int i=0; i<row; i++)
	{
		for (int j=0; j<col; j++)
		{
			cout<<"enter element at: ["<<i<<"]["<<j<<"] :";
			cin>>arr[i][j];
		}
	}
}

void printArray(int **arr, int row, int col)
{
	cout<<"array of given elements is: "<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void sumArray(int **arr, int row, int col)
{
	int sum=0;
	cout<<"sum of all elements of arr is : ";
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			sum+=arr[i][j];
		}
	}
	cout<<sum;
	cout<<endl;
}

void transposeArray(int **arr, int row, int col)
{
	cout<<"transpose of array is :"<<endl;
	for(int j=0; j<col; j++)
	{
		for(int i=0; i<row; i++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	int row,col;
	cout<<"enter number of rows :";
	cin>>row;
	cout<<"enter number of column :";
	cin>>col;
	
	int **arr=new int*[row];
	for(int i=0; i<row; i++)
	{
		arr[i]=new int[col];
	}
	
	arrInput(arr,row,col);
	printArray(arr,row,col);
	sumArray(arr,row,col);
	transposeArray(arr,row,col);
	return 0;
}