#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	a.push_back(50);
	cout<<"before \n";
	for(auto i=0;i<a.size();i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"after reverse"<<"\n";
		auto start=0;
		auto enda=a.size()-1;
		while(start<enda)
		{
			int t;
			 t=a[start];
			a[start]=a[enda];
			a[enda]=t;
			start++;
			enda--;
		}

		for(auto i=0;i<a.size();i++)
	{
		cout<<a[i]<<"\t";
	}
}