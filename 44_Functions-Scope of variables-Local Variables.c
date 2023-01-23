/* Sample program to shoe the working of local variable*/
#include<stdio.h>
int main()
{
	void sample(); // function prototype
	sample(); // Calling the function
	printf("Value of n = %d",n); //ERROR---> Here n is local variable 
	
}

// following is the defination of the function
void sample()
{
	int n=100;
	printf("Value of n = %d",n);
}
