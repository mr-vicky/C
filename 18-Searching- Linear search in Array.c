// Linear Search-->

#include<stdio.h>
int main()
{
	int arr[][3]={
					{10,20,30},
					{40,50,60},
					{27,80,90}
				};
	printf("Enter the key to search: ");
	int key;
	scanf("%d",&key);
	int i;
	for(i=0;i<3;++i)
	{
		if(arr[i]==key)
		{
			printf("The value is found at the location: %d",i+1);
		}
		else
		{
			prinf("Value was not found !");
		}
	}
	return 0;
}
