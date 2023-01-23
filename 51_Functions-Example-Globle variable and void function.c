/* Create 2 functions namely first() and second() apart from main(). Read 3 test scores of a cricketer in main() and
call first() that calculates the average score. From first() call function second() that prints the smallest score.
Instructions:
1. You will neither pass any value nor return any value to the calling function.
2. Do not declare functions. (no function prototypes ). */

#include<stdio.h>
int tsc1,tsc2,tsc3;

// defination of second() function--->
void second()
{
    if(tsc1<tsc2 && tsc1<tsc3)
    printf("Lowest score: %d",tsc1);
    else if(tsc2<tsc3)
    printf("Lowest score: %d",tsc2);
    else
    printf("Lowest score: %d",tsc3);
    
}

// defination of first() function---->
void first()
{
    float average= (tsc1+tsc2+tsc3)/3;
    printf("The average of the score: %.2f\n",average);
    second(); // calling the second() function
}


int main()
{
    // taking the input from the user
    printf("Enter the 3 scores:\n");
    scanf("%d%d%d",&tsc1,&tsc2,&tsc3);
    first(); // calling the second() function
}


