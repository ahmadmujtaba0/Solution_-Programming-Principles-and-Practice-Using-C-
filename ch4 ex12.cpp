/*Create a program to find all the prime numbers between 1 and 100. One 
way to do this is to write a function that will check if a number is prime 
(i.e., see if the number can be divided by a prime number smaller than 
itself) using a vector of primes in order (so that if the vector is called 
primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then write a 
loop that goes from 1 to 100, checks each number to see if it is a prime, 
and stores each prime found in a vector. Write another loop that lists the 
primes you found. You might check your result by comparing your vector 
of prime numbers with primes. Consider 2 the first prime.*/

#include<iostream>
#include<vector>
using namespace std;

bool is_prime(int i_number, vector <int> i_prime)
{
	for(int prime:i_prime)
	{
		if(i_number<prime || i_number%prime==0)
		{
			return false;
		}	
	}
	return true;
}

int main()
{
	vector<int>primes;
	int max;
	cout<<"enter number till where you want to find prime numbers: ";
	cin>>max;
	
	for(int i=2; i<=max; i++)
	{
		if(is_prime(i, primes))
		primes.push_back(i); 
	}
	
	cout<<"prime numbers till "<<max<<" are :\n";
	
	for(int prime:primes)
	{
		cout<<prime<<" ";
	}
	return 0;
}