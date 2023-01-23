 /* Write a program that passes an array to a function. 
 Return the number of even elements. */
 
 #include<stdio.h>
 int main()
 {
     int arr[10];
     int i;
     void No_OF_Even(int *); // function prototype
     for(i=0;i<10;i++)
     {
         printf("arr[%d] = ",i);
         scanf("%d",&arr[i]);
     }
     No_OF_Even();
     printf("Total Number of even numbers: ",No);
     
 }
 
 void No_OF_Even(int *pnt)
 {
    int i, No=0;
    for(i=0;i<10;i++)
     {
         if(*(pnt+i)%2==0)
         {
            No=No+1 ;
         }
     
     }
     return No;
     
     
 }
