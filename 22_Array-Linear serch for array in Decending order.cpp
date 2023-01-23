//Write a program that searches a value from an array, elements of which are in descending order, using binary search .


#include<stdio.h>
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    int i, key;
    
    printf("a[10]={10,9,8,7,6,5,4,3,2,1}\n");
    printf("Enter the key:");
    scanf("%d",&key);
    for(i=10;i>=0;i--)
    {
        if(a[i]==key)
        {
            printf("\nThe key is at the location: %d ",i+1);
        }
    }
    return 0;
}
