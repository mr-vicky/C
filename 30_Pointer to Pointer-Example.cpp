/* WAP that stores address of a pointer variable into a pointer to pointer */
#include<stdio.h>
int main()
{
    int val=1000, *pnt, **ppnt;
    pnt=&val;   // assigning the address of value in pnt
    ppnt=&pnt;  // assigning the address of pnt in the ppnt

    // Printing the value and addresses---->
    printf("\naddress of the val = %u",pnt); // '%u' is used for unsigned int, to print addresses
    printf("\nValue of val= %d",*pnt);
    printf("\naddress of pointer variable pnt = %u",ppnt);
    printf("\nAddress of val = %u",*ppnt);
    printf("\nValue of val = %d",**ppnt);
    return 0;
    
}
