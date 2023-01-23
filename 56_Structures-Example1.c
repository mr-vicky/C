/* WAP that creates students dtructure, reads its members viz. Regesters teh marks in three subjects
and calculate the percentage */
// By taking the input from the user--->

#include<stdio.h>
int main()
{
    struct students
    {
        unsigned long reg_no;
        float mk1, mk2, mk3;
    }; // end of structure specification
    struct students svar; // declaration of structure variable
    float pc;
    printf("Enter the registration number:\n");
    scanf("%lu",&svar.reg_no);
    printf("Enter the marks in three subject:\n");
    scanf("%f%f%f",&svar.mk1,&svar.mk2,&svar.mk3);
    pc=(svar.mk1+svar.mk2+svar.mk3)/300*100;
    printf("Percentage:%.2f",pc);
}
