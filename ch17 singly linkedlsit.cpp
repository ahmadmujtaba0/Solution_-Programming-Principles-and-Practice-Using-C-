#include<iostream>
using namespace std;
 struct Node
 {
 	int data;
 	Node*next;
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
	
	void insertAtFront(int new_data) 
	{
        Node* new_node =new Node;
		new_node->data =new_data;
        new_node->next = head;  
        head = new_node;
    }
	
	void insertAtEnd(int new_data)
	{
		Node*new_node =new Node;
		new_node->data=new_data;
		Node*temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
		new_node->next=NULL;	
	}
	
	void insertInBetween(int new_data, int p)
	{
		Node*new_node=new Node;
		new_node->data=new_data;
		Node*temp=head;
		for(int i=0; i<p-1; i++)
		{
			temp=temp->next;
		}
		new_node->next=temp->next;
		temp->next=new_node;
	}
	
	void deleteFirst()
	{
		if (head==NULL)
		{
			return;
		}
		else
		{
			Node*temp=head;
			head=head->next;
			delete(temp);
		}
	}
	
	void deleteLast()
	{
		if (head==NULL)
		{
			return;
		}
		else if (head->next==NULL)
		{
			delete(head);
		}
		else
		{
			Node*temp=head;
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			delete (temp->next);
			temp->next=NULL;
		}
	}
	
	void deleteInbetween(int p)
	{
		if(head==NULL)
		{
			return;
		}
		else
		{
			Node*temp=head;
			for(int i=0; i<p-1; i++)
			{
				temp=temp->next;
			}
			Node*node_to_delete;
			node_to_delete=temp->next;
			temp->next=node_to_delete->next;
			delete(node_to_delete);
		}
	}
	
	void reverse() 
	{
        Node*prev = NULL;
        Node*current = head;
        Node*next = NULL;
        while (current != NULL) 
		{ 
            next=current->next;
            current->next=prev; 
            prev=current;
            current=next;
        }
        head = prev;  
	}
	
	void circularList()
	{
		Node*temp;
		if(temp->next==NULL)
		{
			temp->next=head;
		}
	}
};
 
 int main()
 {
 	LinkedList l;
 	l.insertAtFront(3);
 	l.insertAtFront(2);
 	l.insertAtFront(1);
 	
 	l.insertAtEnd(4);
 	l.insertAtEnd(5);
 	l.insertAtEnd(6);
 	
 	l.Print();
 	
 	l.insertInBetween(100,3);
 	l.Print();
 	
 	l.deleteFirst();
    l.Print();
    
    l.deleteLast();
    l.Print();
    
    l.deleteInbetween(2);
    l.Print();
    
    l.reverse();
    l.Print();
    
    l.circularList();
    l.Print();
    
    l.insertAtFront(1);
    l.insertAtEnd(6);
    l.Print();

    return 0;
 }