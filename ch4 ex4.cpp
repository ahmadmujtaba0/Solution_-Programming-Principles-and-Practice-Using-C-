/*Write a program to play a numbers guessing game. The user thinks of a 
number between 1 and 100 and your program asks questions to figure 
out what the number is (e.g., “Is the number you are thinking of less than 
50?”). Your program should be able to identify the number after asking 
no more than seven questions. Hint: Use the < and <= operators and the 
if-else construct.*/

#include<iostream>
using namespace std;
int main()
{
    int low=1, high=100;
    char result;

    cout << "think number between 1 and 100: \n";
    
    while (low <= high) 
    {
        int mid=(low + high) / 2;
        cout<<"number you are think is less than or equal to "<<mid<<"? (y/n): ";
        cin>>result;

        if(result =='y' || result =='Y') 
        {
            high=mid;
        } 
        else 
        {
            low=mid+1;
        }

        if(low==high) 
        {
            cout<<"The number you're thinking of is "<<low<<"!\n";
            break;
        }
    }

    return 0;
}
