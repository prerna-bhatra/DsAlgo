#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1="abcd";
	string s2="cdab";
	string t=s1+s1;
	if(t.find(s2)!=string::npos)
	{
		cout<<"rotation\n";
	}
}