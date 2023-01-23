//  Matrix addition of two dimentional array

#include<stdio.h>
int main()
{
	//Taking the values of array a from user
	int a[3][3],i,j;
	printf("Enter the values of matrix a:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//Taking the values of array b from user
	printf("\nEnter the values of matrix a:\n");
	int b[3][3];
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("b[%d][%d]= ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	int c[3][3];
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	// Printing the sum of two arrays
	printf("\nThe sum of array a and b is: \n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d\t",c[i][j]);
			
			
		}
		printf("\n");
	}
	
	return 0;
}
