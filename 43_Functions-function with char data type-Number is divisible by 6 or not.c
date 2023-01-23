#include<stdio.h>
int main()
{
	int num; char ch;
	char divby6(int); // function prototype
	printf("Enter the number:");
	scanf("%d",&num);
	
	// calling the function by passing the argument
	ch=divby6(num);
    if (ch=='y')
	printf("The given number is divisible by 6");
	else if(ch=='n')
	printf("The given number is not divisible by 6");
		
}

char divby6(int num1)
{
	if(num1%6==0) // Checking the number is divisible or not
	return 'y'; // if true return 'y'
	else 
	return 'n'; // if false return 'x'
}
