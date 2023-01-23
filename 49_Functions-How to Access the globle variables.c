/*  A sample program that shows you how to overide local variable so that you can access the globle variables */
#include<stdio.h>
int n=10;
int main()
{
    int n=90; // local varible
    printf("Value of n = %d\n",n);
    {
        extern int n; // extern---> is the keyword that we can use to access the globle variables
        printf("Value of n = %d",n);
    }
}
