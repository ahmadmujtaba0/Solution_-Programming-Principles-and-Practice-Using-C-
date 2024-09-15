/*Write a program that reads and stores a series of integers and then com- 
putes the sum of the first N integers. First ask for N, then read the values 
into a vector, then calculate the sum of the first N values.*/

#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n;
    cout<<"number of values you want to sum: ";
    cin>>n;

    vector<int> integers;
    cout<<"enter some integers: ";
    int num;
    while (cin>>num) 
	{
	   integers.push_back(num);
    }

    int sum = 0;
    for (int i=0; i<n; i++) 
	{
        sum += integers[i];
    }

    cout<<"The sum of the first "<<n<<" numbers :";
    
    cout<<sum<<endl;
    return 0;
}