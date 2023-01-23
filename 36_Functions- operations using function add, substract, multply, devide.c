/*  WAP that read three variables and pasees and passes them to the function that call and return their sum    */
#include<stdio.h>
int main()
{
    int a,b,c,sum, substract,multiply,devide;
    
    // Function prototype (Function declaration)----->
    int sum_fun(int,int,int);    // fun 1:sum
    int substract_fun(int,int,int); // fun 2: substract
    int multiply_fun(int,int,int); // fun 3: Multiply
    int devide_fun(int,int,int); // fun 4: Devide
     
    // taking the input from the user
    printf("Enter the values of a, b and c:\n"); 
    scanf("%d%d%d",&a,&b,&c);
    
    // calling the all functions---->
    printf("\nCalculation using functions--->\n");
     // calling function 1: sum
    sum=sum_fun(a,b,c);  // calling the function by passing three arguments
    printf("\nSum: %d+%d+%d = %d\n",a,b,c,sum);
    // calling function 2: substract
    substract=substract_fun(a,b,c);
    printf("Substract: %d-%d-%d = %d",a,b,c,substract);
    // calling function 3: multiply
    multiply=multiply_fun(a,b,c);
    printf("\nMultiply: %d*%d*%d = %d",a,b,c,multiply);
    // calling function 4: devide
    devide=devide_fun(a,b,c);
    printf("\nDevide: %d/%d/%d = %d",a,b,c,devide);

}


//  following is the definaton of the function----->
 // Fun 1: sum
int sum_fun(int a1, int b1, int c1) // here a1,b1,c1 are the formal(dummy) arguments
{
    int total_sum;
    total_sum=a1+b1+c1;
    return total_sum;
}
 // fun 2: Substract
int substract_fun(int a1, int b1, int c1)
{
    int total_substraction;
    total_substraction=a1-b1-c1;
    return total_substraction;
}

// fun 3: multiply
int multiply_fun(int a1,int b1,int c1)
{
    int total_multiply;
    total_multiply=a1*b1*c1;
    return total_multiply;
}

// // fun 4: devide
int devide_fun(int a1, int b1, int c1)
{
    int total_devide;
    total_devide=a1/b1/c1;
    return total_devide;
}

