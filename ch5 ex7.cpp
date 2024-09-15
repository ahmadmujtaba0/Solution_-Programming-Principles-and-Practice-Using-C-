//quadtric equatoin

#include <iostream>
#include <cmath>
using namespace std;
void quadratic_roots(double a, double b, double c) 
{
    double disc=b*b - 4*a*c;

    if (disc>0) 
	{
        double root1=(-b + sqrt(disc)) / (2*a);
        double root2=(-b - sqrt(disc)) / (2*a);
        cout<<"The roots are: "<<root1<<" and "<<root2<<endl;
    } 
	else if (disc==0) 
	{
        double root=-b / (2*a);
        cout<<"The root is: "<<root<<endl;
    } 
	else 
	{
        cout<<"There are no real roots."<<endl;
    }
}

int main() 
{
    double a, b, c;

    cout<<"enter quadratic equation (a, b, c): ";
    cin>>a>>b>>c;
    quadratic_roots(a, b, c);
    return 0;
}