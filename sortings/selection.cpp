#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void selection(int a[],int n)
{
	int i,j,minidx;
	
	for(i=0;i<n-1;i++)
	{
		minidx=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[minidx])
			{
				minidx=j;
			}
			
		}
		swap(&a[minidx],&a[i]);
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
	selection(a,n);
	print(a,n);
}