#include<iostream>
using namespace std;
struct Pairofminma
{
int  min;
int max;
};

struct  Pairofminma getminmax(int a[],int n)
{
	struct Pairofminma minmax;
	if(n==1)
	{
		minmax.min=a[0];
		minmax.max=a[0];
		return minmax;
	}
	if(a[0]>a[1])
	{
		minmax.max=a[0];
		minmax.min=a[1];
	}
	else
	{
		minmax.min=a[0];
		minmax.max=a[1];
	}

	for(int i=2;i<n;i++)
	{
		if(a[i]>minmax.max)
		{
			minmax.max=a[i];

		}
		else if(a[i]<minmax.min)
		{
			minmax.min=a[i];
		}
		
	}
	return minmax;

}

int main()
{
	int arr[]={10,23,45,90,3,112,44,78,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	struct Pairofminma minmax=getminmax(arr,n);
	cout<<"min="<<minmax.min<<"\n";
	cout<<"max="<<minmax.max<<"\n";

}











