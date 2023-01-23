/* Pointers in c */
#include<stdio.h>
int main()
{
    int *pt;    // Declaration of pointer to int
    int a=10;
    float *fp;  // Declaration of pointer to float
    float b=56.7;
    char *cp;   // Declaration of pointer to char
    char Chrt ='A';
    pt=&a;
    fp=&b;
    cp=&Chrt;
    
    printf("\nAddress of a = %u",pt);   // Here '%u' is for 'unsigned int'
    printf("\nAddress of b = %u",fp);
    printf("\nAddress of chrt = %u",cp);
    return 0;
}
