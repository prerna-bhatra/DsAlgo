#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;

};

struct Node *top=NULL;
void push(int x)
{
	struct Node  *temp=new Node();
	if(!temp)
	{
		cout<<"overflow\n";
	}
	else
	{
		temp->data=x;
		temp->next=top;
		top=temp;
	}

}

void pop()
{
	struct Node *temp;
	if(top==NULL)
	{
		cout<<"underflow\n";
	}
	else
	{
		temp =top;
		top=top->next;
		temp->next=NULL;
		free(temp);
	}
}

void peek()
{
	if(top==NULL)
	{
		cout<<"emppty stack\n";
	}
	else
	{
		cout<<top->data;
	}
}

int main()
{
	push(10);
	push(20);
	push(30);
	cout<<"top element\n";
	peek();
	pop();
	cout<<"top element\n";
	peek();


}














