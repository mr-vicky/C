/* Write a program to read 4 values of any data types in the function main() & pass them to a function updation().
In the called function raise the values of the first and last variable by 4 times and lower the values of the 
second and third by half. Now print the updated values back in the calling function main(). */
#include<stdio.h>
int
main ()
{
  int a, b, c, d, u;
  printf ("Enter the four numbers:\n");
  scanf ("%d%d%d%d", &a, &b, &c, &d);
  void updation (int *, int *, int *, int *);	//function prototype
  updation (&a, &b, &c, &d);	// calling the function
  printf ("The values of a,b,c and d:\n%d\n%d\n%d\n%d\n", a, b, c, d);
}

void
updation (int *a1, int *b1, int *c1, int *d1)
{
  *a1 = *a1 + 4;
  *d1 = *d1 + 4;
  *b1 = *b1 - 2;
  *c1 = *c1 - 2;

}

