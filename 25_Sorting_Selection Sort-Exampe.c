/* Selection short */ 

#include<stdio.h>
int main()
{
    int arr[10],i,j,temp;
    // this is the declaration of array
    
    printf("Enter the values of array:\n");
    for(i=0;i<10;i++)    // taking the values of array from the user
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    
    // Following cide is the code of selection sort 
    for(i=0;i<9;i++)    //  outer loop for passes  -----> i<9 because we have n-1 passes
    {
        for(j=i+1;j<10;j++) // inner loop for comparisons
        {
            if(arr[i]>arr[j])	// Array will be sorted in Ascending order
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            } // ending of if block
            
        }   // ending of inner loop
        
    }   // ending of outer loop
    
    // printing the sorted array
    printf("\nArray after sorting by selection sort : \n");
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
