// WAP that reads number from the user into an array.
// Print their sum and average of the array.

#include<stdio.h>
int main()
{
	double arr[10], sum = 0.0;
	int count = 0;
	while(count<10)
	{
		printf("Enter the number: ");
		scanf("%lf",&arr[count]);
		sum += arr[count];   // sum = sum + arr[count]       ---->Both are the same
		++count;
	}
	printf("Sum = %.2lf\nAverage = %.2lf\n", sum, sum/2);
	return 0;
	
}
