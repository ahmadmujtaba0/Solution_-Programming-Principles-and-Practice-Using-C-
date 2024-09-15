/* This drill is to write a program that produces a simple form letter based on 
user input. Begin by typing the code from §3.1 prompting a user to enter 
his or her first name and writing “Hello, first_name” where first_name is 
the name entered by the user. Then modify your code as follows: change 
the prompt to “Enter the name of the person you want to write to” and 
change the output to “Dear first_name,”. Don’t forget the comma.*/

#include<iostream>
using namespace std;
int main() 
{
    cout<< "Enter friend's first name:\n";
    cout << "!\n"; 
    string f_name; 
    cin>>f_name; 
    cout<<"Dear "<<f_name<<",\n";

    cout<< "Enter name of another friend:\n";
    string friend_name;
    cin>> friend_name;
    cout<<"Have you seen "<<friend_name<<" lately?\n";

    char friend_sex = 0;
    cout<< "Enter 'm' if male and 'f' if female:\n";
    cin>> friend_sex;
    if(friend_sex == 'm')
    {
        cout<<"If you see "<< friend_name<<" please ask him to call me.\n";
    }
    else if(friend_sex == 'f')
    {
        cout<<"If you see "<< friend_name<<" please ask her to call me.\n";
    }

    cout<<"Enter the age of the recipient:\n";
    int age;
    cin>> age;
    if(age <=0  || age >=110 )
    {
        cerr << "You're kidding!\n";
        return 1;
    }
    
    cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";

    if(12 > age)
    {
        cout<<"Next year you will be "<<age+1<<".\n";
    }
    else if(17 == age)
    {
        cout<<"Next year you will be able to vote.\n";
    }
    else if(70 < age)
    {
        cout<<"I hope you are enjoying retirement.\n";
    }

    return 0;
}