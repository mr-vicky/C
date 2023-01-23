/* Write a program to read 4 values of any data types in the function main() & pass them to a function updation().
In the called function raise the values of the first and last variable by 4 times and lower the values of the 
second and third by half. Now print the updated values back in the calling function main(). */

#include<stdio.h>
int main()
{
    void updation(int *, float *, int *, float *); //function prototype
    int a, b;
    float c,d;
    printf("Enter the values of a, b, c and d\n");
    scanf("%d%d%f%f",&a,&b,&c,&d);
    updation(&a, &c, &b, &d); // calling the function
    printf("Updated values in the calling function:\n");
    printf("a = %d\nc = %.2f\nb = %d\nd = %.2f\n",a,c,b,d);
}

void updation(int *ap, float *cp, int *bp, float *dp)
{
     // raising the values of first and last variables 4 times
    *ap = *ap * 4;
    *dp = *dp * 4;
     // lowering the vaues of second and third variables by half
    *bp = *bp/2;
    *cp = *cp/2;
}
