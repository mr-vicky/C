// Binary Search Implementation program
// The given List must be shorted

#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],lft=0,rt=9, mid=(lft+rt)/2,key,i;
	printf("Note-[Please enter the elements in the ascending order]\nEnter the elements of the arry:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the value to search: "); // Entering the value to search
	scanf("%d",&key);
	while(lft<=rt)
	{
		if(key<a[mid])
		{
			rt=mid-1;
		}
		else if(key>a[mid])
		{
			lft=mid+1;
		}
	    else 
		{
			printf("The element is found at location: %d",mid+1);
			break; // jumps out of the loop block	
		}
		mid=(lft+rt)/2; // Updating the value of mid
		
	}
	if (lft>rt)
		{
			printf("\nThe element is not found !");
		}
		return 0;
	
//	int a[10]={
//				{10,20,30},
//				{40,50,60},
//				{70,80,90}};
//	int i,lft=0,rt=8,key;
//	int mid=lft+rt/2;
//	printf("Enter the number you want to search: ");
//	scanf("%d",&key);
//	for(i=0;i<8;++i)
//	{
//		
//		if(a[mid]<key)
//		{
//			lft=mid+1;
//		}
//		if(a[mid]>key)
//		{
//			rt=mid-1;
//		}
//		if(a[mid]==key)
//		{
//			printf("The Elemet is found at mid location %d",mid );
//			break;
//		}
//		mid=lft+rt/2;
//	}
//	printf("\nNo such value is found !");
//	return 0;
} 
