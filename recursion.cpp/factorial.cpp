#include<iostream> 
int factorial(int n) 
{ 
	
	return (n==1 || n==0) ? 1: n * factorial(n - 1); 
} 
int main() 
{ 
	int num = 5; 
	printf ("Factorial of %d is %d", num, factorial(num)); 
	return 0; 
} 
