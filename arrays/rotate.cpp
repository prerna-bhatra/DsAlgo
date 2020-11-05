//using temp array

#include<iostream>
using namespace std;
 void rotate(int a[],int n,int d)
 {
 	int temp[d];
 	for(int i=0;i<d;i++)
 	{
 		temp[i]=a[i];
 	}	
 	for(int i=0;i<d;i++)
 	{
 		cout<<temp[i]<<"\n";
 	}	
 	int i=d;
 	for(int j=0;j<n;j++)
 	{
 		a[j]=a[i];
 		i++;
 	}
 	cout<<"original\n";
 	for(int i=0;i<n-d;i++)
 	{
 		cout<<a[i]<<"\n";
 	}
 	i=0;
 	for(int j=n-d;j<n;j++)
 	{
 		a[j]=temp[i];
 		i++;
 	}
 	cout<<"after\n";
 	for(int i=0;i<n;i++)
 	{
 		cout<<a[i]<<"\n";
 	}	


 }
 int main()
 {
 	int a[]={1,2,3,4,5,6,7};
 	int n=sizeof(a)/sizeof(a[0]);
 	int d;
 	cout<<"enter d";
 	cin>>d;
 	rotate(a,n,d);
 }