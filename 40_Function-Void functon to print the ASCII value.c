/* ASCII Values: WAP to print the ASCII values */

#include<stdio.h>

void display()
{
    int a=0;
    while(a<=225)
    {
        printf("[%d] = [%c]\n",a,a);
        ++a;
        
    } // end of loop block 
} // end of defination of the function display()


int main()
{
    display(); // calling the function
}
