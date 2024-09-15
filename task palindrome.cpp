#include<iostream>
using namespace std;
void palindrome(string s)
{
	int f=0;
	int l=s.length() -1;
    while(f<l)
	{
		if(s[f]!=s[l])
	    {
		    cout<<"not a palindrome ";
		    return;
	    }
	    f++;
	    l--;
	}
	cout<<"it is a palimdrome ";
}
	
int main()
{
	string s;
	cout<<"enter string :";
	cin>>s;
	
	palindrome(s);
}