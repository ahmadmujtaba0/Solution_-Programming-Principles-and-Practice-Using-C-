/*Write a program that consists of a while-loop that (each time around the 
loop) reads in two ints and then prints them. Exit the program when a 
terminating '|' is entered. */

#include<iostream>
using namespace std;
int main() 
{

    cout << "Enter two integer values separated by a space:\n";

    int val1, val2;
    while (cin>>val1>>val2)
    {
        cout<<val1<<'\t'<<val2<<'\n';
    }
    return 0;
}