/*Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.; and assign its 
address to a variable p2. 
4. Print out the value of p2 and of the array it points to.*/

#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	
	int*ptr=arr;
	for(int i=0; i<7; i++)
	{
		cout<<*ptr<<" ";
		ptr++;
	}
	return 0;
}