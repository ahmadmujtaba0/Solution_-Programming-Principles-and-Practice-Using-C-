#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
vector<int> v = {5, 7, 9, 4, 6, 8};
for (int i=0; i<v.size(); i++)
{
    cout << v[i]<<" ";
}
cout<<endl;

vector<double> temps = {33.0, 23.9, 25.7, 21.2, 28.5, 19.8};
sort(temps.begin(), temps.end());
    
for (int i=0; i<temps.size(); i++)
{
    cout<<temps[i]<<" ";
}
    return 0;
}