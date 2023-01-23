/* WAP that creates students dtructure, reads its members viz. Regesters teh marks in three subjects
and calculate the percentage */
// By using the assigned values--->

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

    svar.reg_no=100000;
    svar.mk1=99;
    svar.mk2=99;
    svar.mk3=99;
    
    pc=(svar.mk1+svar.mk2+svar.mk3)/300*100;
    printf("Percentage:%.2f",pc);
}
