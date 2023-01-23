/*  WAP to calculate Factorisl of the number using function by passing the single argument num    */

#include<stdio.h>
int main()
{
    int num; long fct;
    long calcfact(int); // function prototype
    printf("Factorial of the number---->\n");
    printf("Enter the number: "); // geting the input from the user
    scanf("%d",&num);
    	
    // calling the function
    fct=calcfact(num); // passing the argument while calling the function
    printf("Factorial of the %d! = %ld\n",num,fct);
}

// function defination--->
long calcfact(int num)
{
    long f=1;
    while(num>=2)
    {
        f=f*num; // same as writing f*=num
        --num;

    } // end of loop
    return f;
}
