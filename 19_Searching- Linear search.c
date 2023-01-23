// Implementation Program of Linear search

#include<stdio.h>
#include<conio.h>

int main()
{
	int sc[10], i, value;
	
	printf("Enter the values of array:\n");
	for(i=0;i<10;++i)
	{
		printf("a[%d]= ",i);
		scanf("%d",&sc[i]);	
	}
	
	printf("\nEnter the value You want to search: ");
	scanf("%d",&value);   // Taking the value from the user to search
	
	for(i=0;i<10;++i)    // For loop to search the value in the array by traversing int the array
	{
		if(sc[i]==value)
		{
			printf("\nThe value is find at the location: %d",i+1);
			break;
		}
		if(i==10)
	{
		printf("The value is not found !");
	}
			
	// If the value is not found then print the following statement:	
	}
	
	return 0;
}
