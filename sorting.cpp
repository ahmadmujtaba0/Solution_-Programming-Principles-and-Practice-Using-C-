#include <iostream>
using namespace std;
void sort(int arr[], int n) 
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

int main() 
{
int arr[] = {4,6,10,1,4,7};
int n = sizeof(arr)/sizeof(arr[0]);  
sort(arr, n); 
    
for (int i = 0; i < n; i++) 
{
    cout << arr[i] << " ";
}   
return 0;
}
