#include<bits/stdc++.h>
using namespace std;

void insertion(int a[],int n)
{
	int i,j,key;
	for(i=0;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;;
		}
		a[j+1]=key;

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
	insertion(a,n);
	print(a,n);
}