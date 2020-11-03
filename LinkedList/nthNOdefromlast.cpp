// Simple C++ program to 
// find n'th node from end 
#include<bits/stdc++.h> 
using namespace std; 

/* Link list node */
struct Node 
{ 
int data; 
struct Node* next; 
}; 

/* Function to get the nth node 
from the last of a linked list*/
void printNthFromLast(struct Node *head, int n) 
{ 
	struct Node *slow=head;
	struct Node *fast=head;
	int c=0;
	if(n==0)
	{
			cout<<0<<"is not a node\n";
	}
	while(c<n)
	{
		if(fast==NULL)
		{
			cout<<n<<"is greather than number of nodes in list\n";
			return ;
		}
		fast=fast->next;
		c++;
	}

	if(fast==NULL)
	{
		
		if(head!=NULL)
		{
			cout<<slow->data;
		}
	}
	else
	{
		while(fast!=NULL)
		{
		fast=fast->next;
		slow=slow->next;	
		}
		
		cout<<slow->data;
	}

} 





// Function to push 
void push(struct Node** head_ref, int new_data) 
{ 
/* allocate node */
struct Node* new_node = new Node(); 

/* put in the data */
new_node->data = new_data; 

/* link the old list off the new node */
new_node->next = (*head_ref);	 

/* move the head to point to the new node */
(*head_ref) = new_node; 
} 

/* Driver program to test above function*/
int main() 
{ 
/* Start with the empty list */
struct Node* head = NULL; 
push(&head, 20); 
push(&head, 40); 
push(&head, 60); 
push(&head, 80); 

printNthFromLast(head, 4); 
}
