/*	Substracting two pointer variable  after literal substraction , 
Result will be divided by size of data	*/

//------------This program is a INCOMPLETE

#include<stdio.h>
int main()
{
	int arr[]={100,200,500, 1000,800,90};
	int n=&arr[4]-&arr[2];
	printf("n=%d\n",n);
	
	//------------------------------------------------------------------------------------------------------
	
	double amount[]={1000.0,20.02,50000, 10.001,800.8,90.9};
	double m=&amount[2]-&amount[0];
	printf("m=%i\n",m);
}
