#include <bits/stdc++.h>
using namespace std;
int removeDuplicateArray(int arr[],int n)
{
	if(n==0 || n==1)
	{
		return n;
	}

	int i,j;
	int temp[n];
	j=0;
	for(i=o;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			temp[j++]=a[i];//we want to return j if we use i here then we will not get the value of index for arrya till where we want to print array
							//if we use i so we wiil first resize the array or unique function can also be used;
		}
	}
	temp[j]=a[n-1];

	for (int i=0; i<j; i++) 
        arr[i] = temp[i]; 
  
    return j; 
    //after jthe index in array a there will be 0 or garbage values 
}
int main()
{
	int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    // removeDuplicates() returns new size of 
    // array. 
    n = removeDuplicates(arr, n); 
  
    // Print updated array 
    for (int i=0; i<n; i++) 
       cout << arr[i] << " "; 
  
}






