#include <bits/stdc++.h>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n1,
					int n2)
{
	set<int> hs;

	// Insert the elements of arr1[] to set S
	for (int i = 0; i < n1; i++)
		hs.insert(arr1[i]);

	for (int i = 0; i < n2; i++)

		// If element is present in set then
		// push it to vector V
		if (hs.find(arr2[i]) != hs.end())
			cout << arr2[i] << " ";
}


int main()
{
	int arr1[] = { 7, 1, 5, 2, 3, 6 };
	int arr2[] = { 3, 8, 6, 20, 7 };
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	
	printIntersection(arr1, arr2, n1, n2);

	return 0;
}
