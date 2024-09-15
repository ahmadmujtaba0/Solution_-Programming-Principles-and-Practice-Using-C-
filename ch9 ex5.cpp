#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Name_pairs 
{
public:
    Name_pairs() {} 

    void read_names() 
	{
        string name;
        cout<<"Enter names (q to quit): ";
        while (cin>>name && name!= "q") 
		{
            names.push_back(name);
        }
    }

    void read_ages() 
	{
        if (names.empty()) 
		{
            cout<<"Error: No names entered.\n";
            return;
        }

        cout<<"Enter ages for each name: ";
        for (size_t i=0; i<names.size(); i++) 
		{
            double age;
            if (cin>>age) 
			{
                ages.push_back(age);
            } else 
			{
                cout << "Error: Invalid age for "<<names[i]<<endl;
                return;
            }
        }
    }

    void print() const 
	{
        for (size_t i=0; i<names.size(); i++) 
		{
            cout<<names[i]<<" "<<ages[i]<<endl;
        }
    }

    
private:
    vector<string> names;
    vector<double> ages;
};

int main() 
{
    Name_pairs p;

    p.read_names();
    p.read_ages();
    p.print();
    return 0;
}