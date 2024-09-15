/*Add a unit to each double entered; that is, enter values such as 10cm, 
2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume con- 
version factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit 
indicator into a string. You may consider 12 m (with a space between the 
number and the unit) equivalent to 12m (without a space). */

#include<iostream>
using namespace std;
 double convert_to_cm(double value, string unit)
 {
	if (unit=="cm")
	{
		return value;
	}
	else if (unit=="m") 
	{
        return value*100; 
    } 
	else if (unit=="in") 
	{
        return value*2.54;
    } 
	else if (unit=="ft") 
	{	
        return value*12*2.54; 
    }
	else 
	{
		cout << "Unknown unit!\n";
	}	
 }
 
 
int main() 
{
    double value1, value2, value3;
    string unit1, unit2, unit3;

    cout<<"Enter the first value followed by the unit: \n";
    cin>>value1>>unit1;
    cout<<"Enter the second value followed by the unit:\n";
    cin>>value2>>unit2;
    cout<<"Enter the third value followed by the unit:\n";
    cin>>value3>>unit3;

    // Convert to cm
    double val1_cm = convert_to_cm(value1, unit1);
    double val2_cm = convert_to_cm(value2, unit2);
    double val3_cm = convert_to_cm(value3, unit3);
    
    cout<<val1_cm<<"cm, "<<val2_cm<<"cm, "<<val3_cm<<"cm\n";
    
	return 0;
}