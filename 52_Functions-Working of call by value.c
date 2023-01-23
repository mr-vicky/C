/* WAP that demonstrate the working of call by value */
#include<stdio.h>
int main()
{
    void somedata(int, float); // function prototype
    int a=100;
    float b=200.0;
    somedata(a,b); // calling the function by passing the copies of the value
    printf("Values of a and b after returning from the function: %d\t%.2f\n\n",a,b);
}

// followint is the defination of function somedata()--->
void somedata(int a1, float b1)
{
    a1+=100;
    b1*=2;
    printf("Values of formal parameters: %d\t%.2f\n\n",a1,b1);
}
