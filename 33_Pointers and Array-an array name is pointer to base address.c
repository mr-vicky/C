/*  WAP that illustrate the fact that 'An array name is pointer to base address'    */
#include<stdio.h>
int main()
{
    int arr[]={100,200,900,4000}; //Declaration of array
    
    // Printing the address of the array elements--->
    printf("Base address = %u\n",arr);
    printf("Address of second elememt arr[1]=%u\n",arr+1);
    printf("Address of third element arr[2] =%u\n",arr+2);
    
    // printing the values of array by using pointer--->
    printf("Value of first element  =%d\n",*arr);	// '*arr'--->is the 'base_address'
    printf("Value of second element =%d\n",*(arr+2));	// '*(arr+2)'--> base_address+2(size of data type)
    printf("Value of third element  =%d\n",*(arr+3));
    
}
