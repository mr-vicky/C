/* A program using * 'value at address' or derefrence operator or indirectional operator */
#include<stdio.h>
int main()
{
    int a=100, *ip; // declaration of pointer
    float b=90000.00, *dp;  // declaration of pointer
    
    ip=&a;  // assingning the address of a in ip
    dp=&b;  // assingning the address of b in dp
    
    printf("Value of a = %d\n",*ip); // 'ip'= contais the addres of 'a', '*ip'= contains the value of 'a'
    printf("Value of b = %.2f\n",*dp); // 'dp'= contais the addres of 'b', '*dp'= contains the value of 'b'
}
