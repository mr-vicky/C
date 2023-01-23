// WAP that reads values into the elements of 2D arrays and prints them

#include<stdio.h>
int main()
{
	int scores[3][3], i, j; // Initializing the 2D array
	for(i=0;i<3;++i){
		
		for(j=0;j<3;++j){
			
			printf("scores[%d][%d]= ",i,j);  // Taking the values of array from the user
			scanf("%d",&scores[i][j]);   // Storing the values of array in the matrix with perticular position
			
		} // End of 1st for loop
	} // End of 2nd for loop
	
	printf("\n\nElements of Matrix are: \n");
	for(i=0;i<3;++i){
		
		for(j=0;j<3;++j){
			
			printf("%d ",scores[i][j]);
			
		}    // End of 3rd for loop
		printf("\n");
	}   // End of 4th for loop
}
