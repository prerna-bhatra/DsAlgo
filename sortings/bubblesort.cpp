#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void bubble(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
				swap(&a[j+1],&a[j]);
		}
	}
}

void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
}

int main()
{
	int a[]={20,23,12,24,10,18,9};
	int n=sizeof(a)/sizeof(a[0]);
	bubble(a,n);
	print(a,n);
}