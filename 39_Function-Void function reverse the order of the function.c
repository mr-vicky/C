/* WAP that reads the number and passes it to a function that displays is reverse.
The called function is not required to retur any value*/

#include<stdio.h>
int main()
{
    void getreverse(long); // function prototype--> void funcion does not return any value
    long num;
    printf("Enter the number:");
    scanf("%ld",&num);
    getreverse(num); // calling the function by passing num
} // end of defination of main() function

// void function doesent returns anything
void getreverse(long num1) // here num1 is the formal parameter
{
    int r;
    while(num1 != 0)
    { // logic is not understood-----------of the body of the unction
        r=num1%10;
        printf("%d",r);
        num1=num1/10;
    } // end of loop block
} // end of defination of getreverse
