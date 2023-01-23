/* WAP to access members using ponter to structure */
#include<stdio.h>
#include<string.h>
int main()
{
	struct sales
	{
		char salesman_code[10];
		float jan_sales, feb_sales, mar_sales;
	};
	struct sales sv; // declaration of structure variable
	struct sales *pt; // declaration of pointer to structure
	pt=&sv; // assigning address of structure sv
	strcpy(pt->salesman_code,"NY001");
	pt->jan_sales=12000.0;
	pt->feb_sales=10000.0;
	pt->mar_sales=90000.0;
	puts(pt->salesman_code);
	printf("January sales = %10.2f\n",pt->jan_sales);
	printf("February sales = %10.2f\n",pt->feb_sales);
	printf("March sales = %10.2f\n",pt->mar_sales);
}
