/* Write a program that searches for multiple occurrences of a value.
   It should print all the locations where that value is present. 
   Print number of occurrences also. */
   
#include<stdio.h>
int main()
{
	int a[10],i,val,that_much_times=0;
	printf("Enter the elements of array:\n");
	
	for(i=0;i<10;i++)  // for block to get the value from the user
	{
		scanf("%d",&a[i]);	
	}
	printf("\nEnter the value you want to search: ");
	scanf("%d",&val);
	
	
	for(i=0;i<10;i++) // for block for traversing from the array
	{
		while(a[i]==val) // while block to print the searched numbers location
		{
			printf("\nThe given value is at location:%d",i+1);
			if(a[i]==val){
			
			that_much_times=that_much_times+1; // Updating the value of  repeted number
			break;
			}	
		}	
	}
	if(that_much_times>0)
	printf("\n%d time the element is found\n",that_much_times); // Printing the number, that how much time repeated
	
	else
	printf("The value is not found !");

	return 0;
}
