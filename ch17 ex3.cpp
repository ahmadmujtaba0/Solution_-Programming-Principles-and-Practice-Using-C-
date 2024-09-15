/*capital to small letter*/


/*#include<iostream>
using namespace std;
void to_lower(char* s)
{
	char* ptr=s;
	while(*ptr !='\0')
	{
		if(*ptr>='A' && *ptr<='Z')
		{
			*ptr=*ptr+('a'-'A');
		}
		ptr++;
	}
}
int main()
{
	char str[]="PROGRAMMING";
	to_lower(str);
	cout<<str;
	return 0;
}
*/





#include<iostream>
using namespace std;
void to_lower_case(char* s)
{
	char *ptr=s;
	while(*ptr!='\0')
	{
		if(*ptr>='A'&& *ptr<+'Z')
		{
			*ptr=*ptr +('a'-'A');
		}
		ptr++;
	}
}
int main()
{
	char str[]="PROGRAMMING";
	to_lower_case(str);
	cout<<str;
	return 0;
}
