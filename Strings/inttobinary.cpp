#include <iostream> 
using namespace std; 
int binaryNum[32]; 
int i = 0; 
void decToBinary(int n) 
{ 
	while (n > 0) { 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
} 

int main() 
{ 
	int n;
	cin>>n; 
	decToBinary(n); 

	for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 

} 
