#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int h)
{
	int n1=m-l+1;
	int n2=h-m;

	int L[n1],r[n2];

	int i,j;
	for(i=0;i<n1;i++)
	{
		L[i]=a[l+i];
	}
	for (j=0;j<n2;j++)
	{
		/* code */
		r[j]=a[m+j+1];
	}
	i=0;
	j=0;
	int k=l;


	while(i<n1 && j<n2)
	{
		if(L[i]<=r[j])
		{
			a[k]=L[i];
			i++;

		}
		else
		{
			a[k]=r[j];
			j++;
		}
		k++;
	}

if(i<n1)
{
	a[k]=L[i];
	i++;
	k++;
}

if(j<n2)
{
	a[k]=r[j];
	j++;
	k++;
}

}

void mergeSort(int a[],int l,int h)
{
	if(l<h)
	{
		int m=l+(h-l)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,h);

		merge(a,l,m,h);
	}
}
void printArray(int A[], int size)
{
    for(int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main()
{
int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
}









