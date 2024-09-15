/*Write a program that writes out the first so many values of the Fibonacci 
series, that is, the series that starts with 1 1 2 3 5 8 13 21 34. The next 
number of the series is the sum of the two previous ones. Find the largest 
Fibonacci number that fits in an int.*/

#include <iostream>
#include <limits>
using namespace std;
int main() 
{
    int N;
    cout << "Enter the number of Fibonacci values to print: ";
    cin >> N;
    int fib1 = 1;
    int fib2 = 1;
    cout << fib1 << " " << fib2 << " ";

    for (int i = 3; i <= N; i++) 
	{
        int fib3 = fib1 + fib2;
        cout<<fib3<<" ";

        if (fib3 > numeric_limits<int>::max()) 
		{
            cout<<"The largest Fibonacci number that fits in an int is: "<<fib2;
            break;
        }
        fib1=fib2;
        fib2=fib3;
    }
    return 0;
}