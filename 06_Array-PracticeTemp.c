#include<stdio.h>
int main()
{
//     float temp[10];
     int temp[10];
    int count=0 ;
    while(count<10)
    {
        printf("Enter the temperature of the %d day:", count);
         scanf("%d", temp[count]);
        ++count;
        
    }
//     for(count=0; count<10; ++count)
//     {
//         printf("The tamperature of the %d day = %d ", count+1, temp[count]);
//        
//     }
    return 0;
}
