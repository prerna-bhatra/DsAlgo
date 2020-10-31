#include<bits/stdc++.h>
using namespace std;
#define MAX 5
class QUEUE
{
	public:
		int a[MAX];
		int front=-1,rear=-1;
		void enq(int x);
		void  dq();

};

void QUEUE::enq(int x)
{
	if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		a[front]=x;

	}
	else if((rear+1)%MAX==front)
	{
		cout<<"QUEUE is full\n";
	}
	else
	{
		rear=(rear+1)%MAX;
		a[rear]=x;
	}
}
void QUEUE::dq()
{
	if(front==-1 && rear==-1)
	{
		cout<<"empty\n";
	}
	else if(front==rear)
	{
		cout<<"dq single emelnet="<<a[front];
	}
	else
	{
		cout<<"dq="<<a[front];
		front=(front+1)%MAX;
	}
}


int main()
{
	class QUEUE q;
	q.enq(10);
	q.enq(20);
	q.dq();
	q.dq();
}







