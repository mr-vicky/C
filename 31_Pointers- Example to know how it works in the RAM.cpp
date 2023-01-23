/*      Pointer Arithmetic     */
#include<stdio.h>
int main()
{
	float a=100.00;
	float *pnt; // Declaration of pointer to float
	double b=200.0;
	double *dpnt; // declaration of pointer to double
	pnt=&a;
	dpnt=&b;
	
	// printing the value and addresses
	printf("For float data type--->\n");
	printf("Address of float a = %u\t value of float a = %5.2f\n", pnt, *pnt);
	++pnt;
	printf("Address of float a = %u\t value of float a = %5.2f\n", pnt, *pnt);
	   	// here the '*pnt' will print the garbage value for the above statement

    printf("\nFor double data type--->\n");
    printf("Address of double b = %u\t value of double b = %5.2f\n", dpnt, *dpnt);
	++dpnt;
	printf("Address of double b = %u\t value of double b = %5.2f\n", dpnt, *dpnt);
		// here the '*dpnt' will print the garbage value for the above statement
}
