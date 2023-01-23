/* Write a program that reads a number and passes it to a function. The called function checks whether the number is
divisible by 6 or not. Note that “Divisible by 6” or “Not divisible by 6” should be displayed in the calling function 
only and not in the called one. */

#include<stdio.h>
int main()
{
    int num;
    void divisible(int); // function prototype
    printf("Enter the number:");
    scanf("%d",&num);
    divisible(num); // calling the function by passing the arguments
    
}

// divisible function body
void divisible(int num1)
{
    int d=num1%6;
    if(d==0)
    printf("The given number is divisible by 6");
    else
    printf("The number is not divisible by 6");
}
