#include <bits/stdc++.h>
using namespace std;

void dupelm(string& s)
{	
	unordered_map<char,int>m;
	 for(int i=0;i<s.length();i++)
	 {
	 	m[s[i]]++;
	 }
	 
	 for (auto x : m) 
		
		{
			if(x.second>1)
			{
				cout<<x.first<<"\t";
			}
		}

}

int main()
{
	string s="geeksforgeeks";
	dupelm(s);
}