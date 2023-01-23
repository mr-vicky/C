// MArtix multiplication 

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[][3]=
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int b[][3]=
	{
		{2,1,3},
		{1,4,6},
		{3,5,7}
	};
	
	int c[3][3], i, j, j1, sum;
	for(i=0;i<3;i++)  // outermost loop for traversing the rows of first Matrix
	{
		for(j=0;j<3;j++)  // Moddle loop for traversing the columns of second matrix
		{
			for(j1=0;j1<3;j1++)  // Innermost loop for traversing the rows of first matrix
			{
				 sum=sum+a[i][j1]*b[j1][i];
			} // End of inner most loop
			 c[i][j]=sum;
//			  sum=0;    // Reinitialization
		}      // End of middle loop
			  sum=0;    // Reinitialization
	}     // End of outer most loop
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
			
		}printf("\n");
		
	}
	return 0;
}
