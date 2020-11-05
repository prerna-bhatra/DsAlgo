#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int>&a,vector<int>&b,int n1,int n2)
{
	set<int> s;
	for(auto i=0;i<n1;i++)
	{
		s.insert(a[i]);
	}
	for(auto j=0;j<n2-1;j++)
	{
		if(s.find(b[j])!=s.end())
		{
			cout<<b[j]<<"\t";
		}
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
	intersection(a,b,n1,n2);

}