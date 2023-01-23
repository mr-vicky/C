/*  A program that illustrates that a function can returns only one value */
#include<stdio.h>
int main()
{
    int x,y,z,biggest;
    int get_biggest(int, int, int); // function prototype
    // taking the input from the user
    printf("Enter any three values:\n");
    scanf("%d%d%d",&x,&y,&z);
    
    biggest=get_biggest(x,y,z); // calling the function by passing the 3 arguments
    printf("biggest number is: %d",biggest);
    
}

// function defination
int get_biggest(int x, int y, int z)
{
    if(x>y && x>z)
    return y,z,x; /* here the compiler will return the only one value which is at last */
    //-----> Conclusion: Function returns only one(single) value
    else if(y>x && y>z)
    return y;
    else 
    return z;
        
}
