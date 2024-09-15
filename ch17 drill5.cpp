/*Allocate an array of ten ints on the free store; initialize it with the values 
100, 101, 102, etc.; and print out its values.*/

#include<iostream>
using namespace std;
int main()
{
	int*arr= new int[10];
	arr[0]=101;
    arr[1]=102;
    arr[2]=103;
    arr[3]=104;
    arr[4]=105;
    arr[5]=106;
    arr[6]=107;
    arr[7]=108;
    arr[8]=109;
    arr[9]=110;
    
    for(int i=0; i<10; i++)
    {
    	cout<<arr[i]<<endl;
	}
	
	return 0;
 } 