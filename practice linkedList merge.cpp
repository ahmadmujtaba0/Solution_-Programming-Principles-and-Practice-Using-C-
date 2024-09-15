#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

struct Node
{
	int data;
	Node*next;
	Node(int val = 0, Node* nxt = nullptr) : data(val), next(nxt) {}
	
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
    
    
    static LinkedList mergeLists(const LinkedList& l1, const LinkedList& l2) 
	{
		LinkedList merged;
		vector<int>vec;
		Node*a=l1.head;
	    Node*b=l2.head;
		
		while(a!=NULL)
		{
			vec.push_back(a->data);
			a=a->next;
		}
		while(b!=NULL)
		{
			vec.push_back(b->data);
	    	b=b->next;
		}
		
		sort(vec.begin(), vec.end());
		
		for (int val:vec) 
		{
            merged.insertAtEnd(val);
        }

        return merged;	
	}
};

int main()
{
	LinkedList l1;
	LinkedList l2;
	
	l1.insertAtEnd(1);
	l1.insertAtEnd(5);
	l1.insertAtEnd(9);
	l1.Print();
	
	l2.insertAtEnd(2);
	l2.insertAtEnd(4);
	l2.insertAtEnd(6);
	l2.Print();
			
    LinkedList merged = LinkedList::mergeLists(l1, l2);
    cout << "Merged List: ";
    merged.Print();
	
	return 0;
}