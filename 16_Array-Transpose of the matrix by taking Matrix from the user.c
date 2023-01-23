/* Write a program that declares and initializes a matrix. Pass this matrix to a function that stores the transpose 
of this matrix into another matrix. Display the resultant matrix. */
// By takin input from the user
#include<stdio.h>

int main()
{
	int i,j,a[3][3];
	printf("Enter the elements of matrix A:\n");
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++) 
		{
	     	printf("a[%d][%d]= ",i,j);
	     	scanf("%d",&a[i][j]);
		} 
// 		printf("\n");
	}
	
	// Printing the Matrix given by user 
	printf("\nMatrix A:\n");
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++) 
		{
	     	printf("%d\t",a[i][j]);
		} 
		printf("\n");
	} 
	printf("\nTranspose of the Matrix A:\n");
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++) 
		{
	     	printf("%d\t",a[j][i]);
		} 
		printf("\n");
	} 
	
	
	return 0;
}
