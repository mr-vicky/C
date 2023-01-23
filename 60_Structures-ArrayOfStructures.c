/* WAP that uses the array of structures */
#include<stdio.h>
int main()
{
    struct laptops
    {
        int RAM;
        int HDD_SPACE;
        float price;
    };
    struct laptops sr[3]; // declaration of array of three structures
    int n;
    
    // following loop is to used to read values into elements of array
    for(n=0;n<3;++n)
    {
        printf("Enter RAM, Hard Disk Space and Price of Laptop %d:\n",n+1);
        scanf("%d%d%f",&sr[n].RAM,&sr[n].HDD_SPACE,&sr[n].price);
    }
    
    for(n=0;n<3;++n)
    {
        printf("Laptop %d: RAM = %3d\tHard Disk Space = %3d\t price = %10.2f\n",n+1,sr[n].RAM,sr[n].HDD_SPACE,sr[n].price);
        
    }
}
