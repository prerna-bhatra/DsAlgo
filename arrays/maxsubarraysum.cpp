#include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(int a[],int n)
{
	int max_so_far=INT_MIN,max_end=0;
	for(int i=0;i<n;i++)
	{
		max_end=max_end+a[i];
		if(max_so_far<max_end)
		{
			max_so_far=max_end;
		}

		if(max_end<0)
		{
			max_end=0;
		}
	}
	return max_so_far;
}
int main()
{
	 int a[] = {-2, -3, -1, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 
    return 0; 
}