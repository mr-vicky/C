/* WAP that reads size of an array from the user. 
Now read the array elements from the user and print the highest value. */

#include<stdio.h>
int main()
{
	int n, count;
	float biggest;
	printf("Enter the size of the array: \n");
	scanf("%f",n);
	float values[n];
	
	
	for(count=0; count<n; ++count)
	{
		printf("values[%d]=  ");
		scanf("%d",&values[count]);
		biggest = values[0];
		
	}
	for(count=1;count<n; ++count)
	{
		if(values[n]>biggest)
		{
			printf("Biggest Value is: ");
		}
	}
	return 0;
}
