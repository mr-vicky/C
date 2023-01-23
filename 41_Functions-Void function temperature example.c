/* Write a program that reads temperatures of three consecutive days and passes them to a function. 
The called function should print which day had minimum temperature. Do not return any value . */

#include<stdio.h>
int main()
{
    float temp1, temp2, temp3; //declaring the variables
    void mintemp(float, float, float); //function prototype
    printf("Enter the temperatures of three consecutive days:");
    scanf("%f%f%f",&temp1,&temp2,&temp3); // calling the function b passing the argument   
    mintemp(temp1, temp2, temp3); // calling the function bye passing the arguments
    
} // end of defination of body of main() function

// following is the defination (body) of function mintemp
void mintemp(float t1, float t2, float t3)
{
    if(t1<t2) // if first days temperature is low that second
    if(t1<t3) // if first days temp is less than 3 rd days too
    printf("First day had minimum temperature");
    else
    printf("Third day had minimum temp");
    else
    if(t2<t3)
    printf("Second day had minimum temp");
    else
    printf("Third day had minimum temperature");
} // end of definations of called function mintemp()

