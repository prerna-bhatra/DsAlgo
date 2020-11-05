#include<bits/stdc++.h>
using namespace std;
void printUnion (vector<int>&a,vector<int>&b,int n1,int n2)
{
	set<int>s;
	for(auto i=0;i<n1;i++)
	{
		s.insert(a[i]);
	}
	for(auto i=0;i<n1;i++)
	{
		s.insert(b[i]);
	}
	for(auto i=s.begin();i!=s.end();i++)
	{
		cout<<*i<<"\t";
	}
}
int  main()
{
	vector<int>a;
	a.push_back(7);
	a.push_back(1);
	a.push_back(5);
	a.push_back(2);
	a.push_back(3);
	a.push_back(6);
	
	vector<int>b;
	b.push_back(3);
	b.push_back(8);
	b.push_back(6);
	b.push_back(20);
	b.push_back(7);
	b.push_back(70);
	int n1=sizeof(a)/sizeof(a[0]);
	int n2=sizeof(b)/sizeof(b[0]);
	printUnion(a,b,n1,n2);

}










