// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 

class LinkedList 
{ 
	public: 
	
	// Linked list Node 
	class Node 
	{ 
		public: 
		int data; 
		Node* next; 
		Node(int d) 
		{ 
			data = d; 
			next = NULL; 
		} 
	}; 
	
	// Head of list 
	Node* head; 

	// Function to delete the nth node from 
	// the end of the given linked list 
	Node* deleteNode(int key) 
	{ 
		Node *first=head,*second=head;
		for(int i=0;i<key;i++)
		{
			if(second->next==NULL)
			{
				if(i==key-1)
				{
					head=head->next;
				}
				return head;
			}
			second=second->next;
		}

		while(second->next!=NULL)
		{
			first=first->next;
			second=second->next;
		}
		first->next=first->next->next;
		return head;

	} 

	// Function to insert a new Node 
	// at front of the list 
	Node* push(int new_data) 
	{ 
		Node* new_node = new Node(new_data); 
		new_node->next = head; 
		head = new_node; 
		return head; 
	} 

	// Function to print the linked list 
	void printList() 
	{ 
		Node* tnode = head; 
		while (tnode != NULL) 
		{ 
			cout << (tnode->data) << ( " "); 
			tnode = tnode->next; 
		} 
	} 
}; 

// Driver code 
int main() 
{ 
	LinkedList* llist = new LinkedList(); 

	llist->head = llist->push(7); 
	llist->head = llist->push(1); 
	llist->head = llist->push(3); 
	llist->head = llist->push(2); 

	cout << ("Created Linked list is:\n"); 
	llist->printList(); 

	int N = 1; 
	llist->head = llist->deleteNode(N); 

	cout << ("\nLinked List after Deletion is:\n"); 
	llist->printList(); 
} 

// This code is contributed by Arnab Kundu 
