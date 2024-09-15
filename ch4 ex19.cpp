/*Write a program where you first enter a set of name-and-value pairs, such 
as Joe 17 and Barbara 22. For each pair, add the name to a vector called 
names and the number to a vector called scores (in corresponding po- 
sitions, so that if names[7]=="Joe" then scores[7]==17). Terminate input 
with NoName 0. Check that each name is unique and terminate with an 
error message if a name is entered twice. Write out all the (name,score) 
pairs, one per line*/

#include <iostream>
#include <vector>
using namespace std;
int main() 
{
vector<string> names;   
vector<int> scores;    
string name;
int score;
while (true) 
{
    cout<<"enter name and score: ";
    cin>>name>>score;
    if (name =="noname" && score ==0) 
	{
        break;
    }

    bool name_exists = false;
    for (int i=0; i<names.size(); i++) 
	{
        if(names[i] == name) 
		{
            name_exists = true;
            break;
        }
    }
    if(name_exists) 
	{
        cout<<"Error: name '"<<name<<"' is already entered."<<endl;
        return 1;
    }
    names.push_back(name);
    scores.push_back(score);
}

cout << "name and score pairs:\n";
for (int i=0; i<names.size(); i++) 
{
    cout<<names[i]<<" "<<scores[i]<<endl;
}
return 0;
}
