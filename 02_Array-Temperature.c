// WAP that reads the temperature of a city for last 10 days into an array

#include<stdio.h>
int main(){
	float temp[10];
	int n = 0;
	while(n<10)
	{
		printf("Enter the temperaure of the %d day: ", n+1);
		scanf("%f",&temp[n]);
		++n;
	}
	n = 0;
	while(n<10)
	{
		printf("The temperature of the %d day is %.2f\n",n+1, temp[n]);
		++n;
	}
}
