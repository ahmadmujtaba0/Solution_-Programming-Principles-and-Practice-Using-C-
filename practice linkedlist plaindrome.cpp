#include<iostream>
#include<stack>
using namespace std;

struct Node
{
	int data;
	Node*next;
	 Node(int data) : data(data), next(NULL) {}
};
class LinkedList
 {
 	public:
 	Node*head;
 	LinkedList(): head(NULL) {}
 	
 		
 	void Print()
 	{
 		Node*temp=head;
 		while(temp!=NULL)
 		{
 			cout<<temp->data<<" ";
 			temp=temp->next;
		}
		cout<<endl;
	}
	
	void insertAtEnd(int new_data) 
	{
        Node* new_node=new Node(new_data);
        if (head==NULL) 
		{
            head=new_node;
            return;
        }
        Node* temp=head;
        while (temp->next != NULL) 
		{
            temp=temp->next;
        }
        temp->next=new_node;
    }

	bool isplaindrome()
	{
		stack<int> st;
		Node*current=head;
		
	while (current != NULL)
		{
			st.push(current->data);
			current =current->next;
		}
		current=head;
		
		while(!st.empty())
		{
			if(st.top()!=current->data)
			{
				return false;
			}
			st.pop();
			current=current->next;
		}
		return true;
	}
	
};

int main()
{
	LinkedList l;
	l.insertAtEnd(1);
	l.insertAtEnd(2);
	l.insertAtEnd(3);
	l.insertAtEnd(1);
	
	l.Print();
	
	if(l.isplaindrome())
	{
		cout<<"the list is plaindrome ";
	}
	else
	{
		cout<<"list is not a plaindrome ";
	}
	

	return 0;
}