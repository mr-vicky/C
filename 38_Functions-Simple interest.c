/* WAP to claculate the simple interest */

The logic of this program is not at complete: Incomplete program---->

#include<stdio.h>
int main()
{
    float pmt, roi, sint;
    int tm;
    float getinterest(float, float, int); // Function prototype
    printf("Enter the principle amount, rate of interest and time:\n");
    scanf("%f%f%d",&pmt, &roi, &tm);
    
    // calling the Function by passing the three argument
    sint=getinterest(pmt, roi, tm);
    printf("Simple interest = %.2f",sint);
}

// following is the defination of the Function
float getinterest(float pmt1, float roi1, int tm1)
{
    float s=(pmt1*roi1*tm1)/100;
    return s;
}
