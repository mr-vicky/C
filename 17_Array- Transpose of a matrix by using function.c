#include<stdio.h>

// Defining the function transpose--->
void transpose(int x[][3])
{
	int y[3][3], i,j; //Declaration of the output array y and other variables
	for(i=0;i<3;i++) // outer loop for rows of x
	{
		for(j=0;j<3;++j ) // Inner loop for column of x
		{
			y[i][j]=x[i][j];  // assigning transpose value into y
		} // end of inner loop
	}	// printing the output matrix
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)  // Inner loop for column of x
		{
       		printf("%d\t",y[i][j]);
		} 
		print("\n");	
	}
	
		 
}

int main()
{
	// following is the declaration of initialisation of input matrix array 
	int arr[][3]={
	{1,2,3},
	{3,4,5},
	{5,6,7}
	};
	transpose(arr); // calling the function by passing the 2D array
	return 0;
} // end of the main function

