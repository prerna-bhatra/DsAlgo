# include <iostream> 
using namespace std; 

// Returns length of smallest subarray with sum greater than x. 
// If there is no subarray with given sum, then returns n+1 
int smallestSubWithSum(int a[], int n, int x) 
{ 
		int min_ln=n+1;
		for(int start=0;start<n;start++)
		{
			int cur_sum=a[start];
			if(cur_sum>x)return 1;


			for(int end=start+1;end<n;end++)
			{
				cur_sum+=a[start];
				if(cur_sum>x && (end-start+1)>min_ln)
					min_ln=end-start+1;
			}
		}	
return min_ln;


} 

/* Driver program to test above function */
int main() 
{ 
	int arr1[] = {1, 4, 45, 6, 10, 19}; 
	int x = 51; 
	int n1 = sizeof(arr1)/sizeof(arr1[0]); 
	int res1 = smallestSubWithSum(arr1, n1, x); 
	(res1 == n1+1)? cout << "Not possible\n" : 
					cout << res1 << endl; 

	int arr2[] = {1, 10, 5, 2, 7}; 
	int n2 = sizeof(arr2)/sizeof(arr2[0]); 
	x = 9; 
	int res2 = smallestSubWithSum(arr2, n2, x); 
	(res2 == n2+1)? cout << "Not possible\n" : 
					cout << res2 << endl; 

	int arr3[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250}; 
	int n3 = sizeof(arr3)/sizeof(arr3[0]); 
	x = 280; 
	int res3 = smallestSubWithSum(arr3, n3, x); 
	(res3 == n3+1)? cout << "Not possible\n" : 
					cout << res3 << endl; 

	return 0; 
} 
