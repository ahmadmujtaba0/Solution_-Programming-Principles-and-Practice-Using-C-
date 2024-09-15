/*Write a program that performs as a very simple calculator. Your calculator 
should be able to handle the four basic math operations — add, subtract, 
multiply, and divide — on two input values. Your program should prompt 
the user to enter three arguments: two double values and a character to 
represent an operation. If the entry arguments are 35.6, 24.1, and '+', the 
program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6 
we look at a much more sophisticated simple calculator.*/

#include<iostream>
using namespace std;
int main()
{
     
cout << "two operands and a  ('+','-','*','/') operation .\n";
    
double op1, op2;
char operation;
   
while (cin >> op1 >> op2 >> operation)
{   
    switch (operation)
   {
        case '+':
            cout << "The sum of " << op1 << " and " << op2 << " is " << op1+op2 << '\n';
            break;
        case '-':
            cout << "The difference of " << op1 << " and " << op2 << " is " << op1-op2 << '\n';
            break;
        case '*':
            cout << "The product of " << op1 << " and " << op2 << " is " << op1*op2 << '\n';
            break;
        case '/':
	        cout << "The division of " << op1 << " and " << op2 << " is " << op1/op2 << '\n';
            break;
        default:
            cout << "The operator " << operation << "is not supported!\n";
            break;
    }
} 
return 0;
}