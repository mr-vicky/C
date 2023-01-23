/* Create a structure specification related to the band's scores by a student appearing for IELTS tests thrice 
with the following members –
char reg_no[15] ;
float bnd1,bnd2,bnd3 ;
read the values and pass the structure to a function that calculates and returns the average band score. */
#include<stdio.h>

struct IELTS
{
    char reg_no[15];
    float bnd1,bnd2,bnd3;
};

int main()
{
    struct IELTS ivar; //declaration of structure variable
    // following is the prototype of the function score_avg()  
    /* float is the return type of the function as we will be returning
    average score band and "struct IELTS" is the dqatatype of the 
    passing argument*/
    
    float score_avg(struct IELTS);
    float band_avg; //declaration of variable that will collect average 
    
    // reading the registration number and bands scored in 3 IELTS tests
    printf("Enter the registration number & IELTS bands scored in 3 tests: ");
    gets(ivar.reg_no);
    scanf("%f%f%f",&ivar.bnd1,&ivar.bnd2,&ivar.bnd3);
   
    band_avg=score_avg(ivar); // calling the function by passing the structure
    printf("Average of bans scored = %.2f",band_avg);
} // end of defination of function main()

// following is the defination of function score_avg()
float score_avg(struct IELTS dvar) // dvar is the formal parameter
{
    float avg = (dvar.bnd1 + dvar.bnd2 + dvar.bnd3)/3;
    return avg;

}




