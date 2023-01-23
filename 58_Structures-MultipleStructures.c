	/* WAP that used multiple structure variables(Structures) */
#include<stdio.h>
int main()
{
	struct students
	{
		unsigned long book_code;
		unsigned int npages;
		float price;
	};// end of structure specification
	struct books bvar1, bvar2, bvar3; // declaration of three structures
	printf("Enter the book_code, number of pages and the price of the first book ");
	scanf("%lu%u%f",&bvar1.book_code,&bvar1.npages,&bvar1.price);
	printf("Enter the book_code, number of pages and the price of the Second book ");
	scanf("%lu%u%f",&bvar2.book_code,&bvar2.npages,&bvar2.price);
	printf("Enter the book_code, number of pages and the price of the third book ");
	scanf("%lu%u%f",&bvar3.book_code,&bvar3.npages,&bvar3.price);
	
	// printing 
	printf("\nBook_code = %lu\tPages = %u\tPrice = %7.2f",bvar1.book_code,bvar1.npages,bvar1.npages,bvar1.price);
    printf("\nBook_code = %lu\tPages = %u\tPrice = %7.2f",bvar2.book_code,bvar2.npages,bvar2.npages,bvar2.price);
	printf("\nBook_code = %lu\tPages = %u\tPrice = %7.2f",bvar3.book_code,bvar3.npages,bvar3.npages,bvar3.price);	
}
