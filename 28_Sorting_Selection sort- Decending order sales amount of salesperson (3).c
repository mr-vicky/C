/* Write a program that reads sales of MX number of salespersons in an array. 
Now display all the sales amounts in descending order. Use Selection sort logic.*/

#include<stdio.h>
int main(){
    int arr[10], i, j, temp;    // Declaration of array
   
    // Taking the input(salesValues) from the user
    printf("Enter the sales amount of the salespersons:\n");
    for(i=0;i<10;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    
    // following is the code of----> selection sort
   for(i=0;i<9;i++) // Outer loop for passes
   {
        for(j=i+1;j<10;j++) // inner loop for comparisons
        {
             if(arr[i]<arr[j])  // if block to swap the numbers
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }   // end of if block
            
        }   // end of inner loop
        
    }   // end of outer loop
    
    // printing the array after sorting
    printf("\nPrinting the values after sorting:\n");
    for(i=0;i<10;i++)
    {
        printf("arr[%d]= %d\n",i,arr[i]);
    }
    
    return 0;
    
}
