/* Passing a structure to the function using call by reference */
#include<stdio.h>
struct employees
{
    unsigned int emp_code;
    int basic_sal;
    float hra, pf, bonus;
}; // end of structure specification
    
int main()
{
    struct employees evar;
    float get_netsalary(struct employees *); // function prototype
    float net_sal;
    printf("Enter the employee code, basic salary, hra, pf and bonus: ");
    scanf("%u%d%f%f%f",&evar.emp_code,&evar.basic_sal,&evar.hra,&evar.pf,&evar.bonus);
    net_sal=get_netsalary(&evar); // calling function by reference because we are passing the address of evar
    
    printf("Net salary = %8.2f",net_sal);
  
}

// defination of the function
float get_netsalary(struct employees *fvar) // here 'struct employees'--> is the datatype, '*fvar'---> id formal parameter
{
    float net_sal;
    net_sal=fvar->basic_sal + fvar->hra + fvar->bonus - fvar->pf;
    return net_sal;
}
