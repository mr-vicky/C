/*  WAP that illustrate the fact that 'An array name is pointer to base address'    */
#include<stdio.h>
int main()
{
    int i, arr[]={100,200,900,4000,5000,6000}; //Declaration of array
    
    printf("Array   = Value\n");
    // printing the addresses and the values of array using the loop---->
    for(i=0;i<6;i++)
    {
    	printf("%u = %d\n", (arr+i),*(arr+i));
	}
    
}
