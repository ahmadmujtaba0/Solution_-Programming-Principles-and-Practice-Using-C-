#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse_vector(const vector<int>& v) 
{
    vector<int> reversed;
    for (int i = v.size() - 1; i >= 0; --i) 
	{
        reversed.push_back(v[i]);
    }
    return reversed;
}


int main() 
{
    vector<int> original = {1, 3, 5, 7, 9};

    vector<int> reversed = reverse_vector(original);
    cout << "Reversed vector: ";
    for (int num : reversed) {
        cout << num << " ";
    }
    return 0;
}