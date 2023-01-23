/* Bubble Sort: Arrage the following elements in the Ascending order */

#include<stdio.h>
int main()
{
	int arr[10],i,j,temp; 
	// Reading values into Array
	
	for(i=0;i<10;++i)	// Taking the values from, the user
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	
	// Code of bubble sort starts from here--->
	
	for(i=0;i<9;++i) // Outer Loop for pass
	{
		for(j=0;j<(9-i);++j) // Loop for comparision
		{
			if(arr[j]>arr[j+1]);
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			} // End of if block
			
		} // End of Inner loop
		
	} // End of outer Loop
	
	// Printing the values of sorted array
	printf("Array after shorting:\n");
	for(j=0;j<10;j++)
	{
//		printf("%d",j);
		printf("%d ",arr[j]);
		
	}
	
//	return 0;
}
