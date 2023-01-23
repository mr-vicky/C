#include<stdio.h>
int main()
{
    int arr[]= {10, 20, 30, 40, 50}; // declaration of array
    int n;
    void sample(int *); // function prototype
    
    //values before calling the function
    printf("Values before calling the function:\n");
   for(n=0;n<5;n++)
    {
        printf("arr[%d] = %5d\n",n,arr[n]); // 
    }
    	
    sample(arr); // calling the function by passing the arguments
     printf("\nValues after calling the function:\n");
    for(n=0;n<5;n++)
    {
        printf("arr[%d] = %5d\n",n,arr[n]); // 
    }
}

// function defination----->
void sample(int *pnt) // we can use 'pnt[]' instead of *pnt 
{
    int n;
    for(n=0;n<5;n++)
    {
        *(pnt+n)=*(pnt+n) + 100; // same as pnt[n] = pnt[n] + 100
    }
}
