/* Write a program that declares and initializes a matrix. Pass this matrix to a function that stores the transpose 
of this matrix into another matrix. Display the resultant matrix. */

#include<stdio.h>

int main()
{
	int i,j,a[][3]=
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	printf(" Matrix A\n");
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
