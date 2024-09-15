#include <iostream>
#include <vector>
using namespace std;

void fibonacci(int x, int y, vector<int>& v, int n) 
{
    v.push_back(x);
    v.push_back(y);

    for (int i = 2; i < n; ++i) {
        int next = v[i - 1] + v[i - 2];
        v.push_back(next);
    }
}

void print(const vector<int>& v) 
{
    cout << "{ ";
    for (int i = 0; i < v.size(); ++i) 
	{
        cout << v[i];
    }
}

int main() 
{
    int x, y, n;
    cout << "Enter the first two Fibonacci numbers: ";
    cin >> x >> y;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;

    vector<int> fib_numbers;
    fibonacci(x, y, fib_numbers, n);
    cout << "Fibonacci sequence: ";
    print(fib_numbers);

    return 0;
}