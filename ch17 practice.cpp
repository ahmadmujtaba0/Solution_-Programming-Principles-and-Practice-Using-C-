/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <double>v;
	v.push_back(2.33);
	v.push_back(2.43);
	v.push_back(2.53);
	
	for (int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
}
*/


/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v={1, 2, 3, 4, 5, 6};
	int* vptr=&v[0];
	for(int i=0; i<v.size(); i++)
	{
		cout<<*vptr<<" ";
		*vptr++;
	}
	return 0;
}
*/

/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int*ptr=new int[3];
	ptr[1]=4;
	ptr[2]=5;
	ptr[0]=3;
	
	cout<<ptr[0];
	cout<<ptr[1];
	cout<<ptr[2];
}
*/


/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int*ptr=NULL;
cout<<*ptr;
}
*/
	

/*
#include<iostream>
#include<vector>
using namespace std;

class vector
{
	int sz;
	int* elem;
public:
	vector(int s)
	:sz{s},elem new double[s]
	
	for (int i=0; i<s; i++)
	{
		elem[i]=0;
	}
	int size() const
	{
		return sz;
	}
};

int main()
{
	vector vec;
	vec.vector(5);
}
*/


/*
#include<iostream>
using namespace std;
class base 
{
	public:
		base()
		{
			cout<<"base class constructor"<<endl;
		}
		~base()
		{
			cout<<"base class destructor"<<endl;
		}
};

class derived: public base
{
	public:
		derived()
		{
			cout<<"derived class constructor"<<endl;
		}
		~derived()
		{
			cout<<"derived class destructor"<<endl;
		}
};

int main()
{
	derived d;
}
	
*/


#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node*next;
};
class linkedlist
{
	public:
	Node*head;
	linkedlist() :	head(NULL) {}
	
	void insertAtFront(int new_data) 
	{
        Node* new_node = new Node;
		new_node->data =new_data;
        new_node->next = head;  
        head = new_node;
    }
	
	void printlist()
	{
		Node* temp =head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
};
int main()
{
	linkedlist list;
	list.insertAtFront(2);
	list.insertAtFront(5);
	list.insertAtFront(1);
	list.insertAtFront(8);
	
	list.printlist();
	
	return 0;
}	