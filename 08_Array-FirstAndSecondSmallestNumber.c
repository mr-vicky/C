//Write a program to finds out the smallest as well as the second smallest in a float 1-D array.

#include<stdio.h>
int main()
{
	int n, count;
	float first_small, second_small;
//	printf("Enter the size of array: ");
//	scanf("%d",&n);
	float values[5];	 // Declaration of array with size n
	
	for(count=0; count<5; ++count)
	{
		printf("values[%d]= ", count);
		scanf("%f",&values[count]);
	} // End of for Loop
	first_small = values[0];
	for(count=0; count<5; ++count)
	{
		if(values[count]<first_small);
		{
		
		first_small = values[count];
		}	//	End of if statement
	}	//	End of loop
	{
		printf("The first_small Number is: %.2f",first_small);
	}
//	
//	second_small = values[0];
//	for(count=1; count<5; ++count)
//	{
//		if(values[count]<second_small);
//		{
//		
//		first_small = values[count];
//		}	//	End of if statement
//	}	//	End of loop
//	{
//		printf("The second_small Number is: %.2f",second_small);
//	}
	return 0;
}
