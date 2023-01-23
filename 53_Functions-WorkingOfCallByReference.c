/* WAP that demonstrate the working of call by value */
#include<stdio.h>
int
main ()
{
  void somedata (int *, float *);	// function prototype
  int a = 100;
  float b = 200.0;
  somedata (&a, &b);		// calling the function
  printf ("Values of a and b after returning from the function: %d\t%.2f\n\n",
	  a, b);
}

// followint is the defination of function somedata()--->
void
somedata (int *a1, float *b1)
{
  *a1 = *a1+100;		// Change will be occured into the original value of a
  *b1 = *b1*2;		// Change will be occured into the original value of a
/* ------> Note: Here we can return more than two values by using call by 
reference in the function */
}

