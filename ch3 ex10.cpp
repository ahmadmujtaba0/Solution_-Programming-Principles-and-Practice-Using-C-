/*Write a program that takes an operation followed by two operands and 
outputs the result. For example: 
+ 100 3.14 
* 4 5 
Read the operation into a string called operation and use an 
if-statement to figure out which operation the user wants, for example, 
if (operation=="+"). Read the operands into variables of type double. 
Implement this for operations called +, –, *, /, plus, minus, mul, and div 
with their obvious meanings.*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"enter an operation ('+','-','*','/','plus','minus','mul','div') \n";
    string operation;
    double op1,op2;
    cin>>operation; 
    cout<<"enter two operands:";
	cin>>op1>>op2;
    double result= 0;
    if(operation == "+" || operation == "plus")
    {
        result= op1+op2;
    }
    else if(operation == "-" || operation == "minus")
    {
        result= op1-op2;
    }
    else if(operation == "*" || operation == "mul")
    {
        result= op1*op2;
    }
    else if(operation == "/" || operation == "div")
    {
        result= op1/op2;
    }
    cout <<"The result of "<<op1<<operation<<op2<<" is "<<result; 
    return 0;
}