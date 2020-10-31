#include <bits/stdc++.h>
using namespace std;
#define MAX 5
class Queue
{
public:
	int a[MAX];
	int front=-1,rear=-1;
	void enqueue(int x);
	void dequeue();
	void print();
};

void Queue:: enqueue(int x)
{
	if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		a[rear]=x;
	}
	else if(rear==MAX)
	{
		cout<<"Queue is full\n";
	}
	else
	{
		rear++;
		a[rear]=x;
	}
}

void Queue::dequeue()
{
	if(front==-1 && rear==1)
	{
		cout<<"Queue is empty\n";
	}
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		cout<<"dequeue="<<a[front]<<"\n";
		front++;
	}
}







int main()
{
	class Queue  q;
	q.enqueue(10);
	q.enqueue(13);
	q.enqueue(14);
	q.dequeue();
	q.dequeue();
	q.dequeue();
}











