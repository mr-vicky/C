/* Write a program that reads random values into an array. Perform bubble sort in such a way that if the array is sorted
in less than n-1 passes, then the rest of the passes should be discarded. */

#include<stdio.h>
int main()
{
    int arr[10],i,j,temp;   // declaration of array
    
    // taking the input from the user
    printf("Enter the values of array:\n");
    for(i=0;i<10;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    
    // following is the code of Bubble sort--->
    for(i=0;i<9;i++)    // outer loop for passes
    {
        for(j=0;j=(9-i);j++) // inner loop for comaprisons
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }   // end of if block
            else
                break;	//then the rest of the passes should be discarded
            
        }   // end of inner loop
        
    } // end of outer loop
    
    // printing the values after sorting the array
    printf("\n Values of array after sorting:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}

/* Instructure code solution--> */

//#include <stdio.h>
//#define MX 10     // defining a constant MX for array size
//int main()
//{
//	int marks[MX],i,j,temp,flag=0;  // declaration of array with size MX and other variables
//	// reading values in array
//	for (i=0;i<MX;++i)
//	{
//	printf("marks[%d] = ",i);
//	scanf("%d",&marks[i]);     // reading values into array
//}
//for (i=0;i<MX-1;++i)    // outer loop for passes
//{
//	for (j=0;j<(MX-i)-1;++j) // inner loop for comparisons
//	{
//		if (marks[j]>marks[j+1]) // interchange if condition is true 
//		{
//			temp=marks[j];   // assigning  value of first element into temp
//			marks[j]=marks[j+1];  // assigning value of second element into first one
//			marks[j+1]=temp ;     // assigning value of temp into second element
//		    flag=1 ;   // make the value of flag 1 indicating that interchanging took place in the current pass 
//		}  // end of if
//	} // end of inner loop
//	if(flag==0)     /* no interchanging took place in the pass just concluded
//	thus indicating that array has turned sorted, no need to go for more passes */
//	break ;         // terminates the outer loop
//	else
//	flag=0;   // reinitialising value of flag with 0
//	}  // end of outer loop
//// lets print the sorted array
//
//for (i=0;i<MX;++i)
//printf("marks[%d] = %d\n",i,marks[i]);
//}
