/* Sample program that illustrates that the local variables have more precedence*/
#include<stdio.h>
int a=10; // Globle variale-->because declared outside of the function
int main()
{
    int a=50; // local variable--> beacuse declared inside the function
    printf("Value of n = %d",a);
    
}
