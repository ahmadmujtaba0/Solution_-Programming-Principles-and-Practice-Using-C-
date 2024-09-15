/*Allocate an array of ten ints on the free store using new. 
2. Print the values of the ten ints to cout. 
3. Deallocate the array (using delete[ ] )*/

#include<iostream>
using namespace std;
int main()
{
	int*arr=new int[10]{1,2,3,4,5,6,7,8,9,10};
	for(int i=0; i<10; i++)
	{
		cout<<arr[i];
	}
	
	delete[] arr;
	return 0;
}