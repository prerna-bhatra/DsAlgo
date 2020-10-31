#include<iostream>
using namespace std;
#define MAX 5
class stack
{
	int top;
public:
	int arr[MAX];
	stack()
	{
		top=-1;
	}
	void push(int x);
	int pop();
	int peek();
	bool isempty();

};
 void stack:: push(int x)
 {
 	if(top==MAX)
 	{
 		cout<<"overflow";
 	}
 	else
 	{
 		top++;
 		arr[top]=x;

 	}
 }

 int stack::pop()
 {
 	if(top==-1)
 	{
 		cout<<"undeflow\n";
 		return 0;
 	}
 	else
 	{
 		int x=arr[top];
 		top--;
 		return x;
 	}
 }



int stack::peek()
{
	if(top==-1)
	{
		cout<<"no data\n";
		return 0;
	}
	else{
		return arr[top];	
	}
}

int main()
{
	class stack s;
	s.push(10);
	s.push(20);
	cout<<s.peek()<<"\n";
	s.pop();
	cout<<s.peek()<<"\n";
	s.pop();
	cout<<s.peek();
}












