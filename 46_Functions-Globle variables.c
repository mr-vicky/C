/* Sample program to demonstrating the working of globle varible */
#include<stdio.h>
int n = 1000; 
int main()
{
	void sample(); // function prototype
	printf("Value of n = %d\n",n);
	sample(); // calling the function
}

//body of sample function
void sample()
{
	void check(); // function prototype of check function
	printf("Value of n = %d\n",n);
	check(); // calling the check() function
}
 // body of check() function 
void check()
{
    printf("Value of n = %d",n); // 
}
