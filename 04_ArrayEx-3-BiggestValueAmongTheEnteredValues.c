/* WAP that reads size of an array from the user. 
Now read the array elements from the user and print the highest value. */

#include<stdio.h>
int main()
{
	int n, count;
	float biggest;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	float values[n];	 // Declaration of array with size n
	
	for(count=0; count<n; ++count)
	{
		printf("values[%d]= ", count);
		scanf("%f",&values[count]);
	} // End of for Loop
	biggest = values[0];
	for(count=1; count<n; ++count)
	{
		if(values[count]>biggest);
		{
		
		biggest = values[count];
		}	//	End of if statement
	}	//	End of loop
	{
		printf("The biggest Number is: %.2f",biggest);
	}
	return 0;
}
