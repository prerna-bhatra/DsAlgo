#include <bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int partion(int a[],int l,int h)
{
	int pivot=a[h];
	int i=l-1;
	int j;
	for(j=l;j<=h-1;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[h]);
	return (i+1);
}

void quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int pi=partion(a,l,h);
		quicksort(a,l,pi-1);
		quicksort(a,pi+1,h);
	}
}

void print(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
}

int main()
{
	int a[]={10,45,23,78,43,90};
	int n=sizeof(a)/sizeof(a[0]);
	quicksort(a,0,n-1);;
	print(a,n);
}





















