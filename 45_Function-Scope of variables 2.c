/* Sample program to show the working of local variables  */
#include<stdio.h>
int main()
{
	int n=200; // local to calling function main
	void sample(); // function prototype
	sample();
	printf("Value of n = %d\n",n);
}

// following is the defination of the function
void sample()
{
	int n=100; // local to called function sample
	printf("Value of n = %d\n",n); 
} // end of defnation body of function sample
