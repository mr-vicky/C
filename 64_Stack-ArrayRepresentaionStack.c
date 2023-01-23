/* Array representation Stacks */

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define MAX 5
typedef struct stack_node
{
    int arr[MAX];
    int top;
}node; // alias (second name)

// defination of push function----->
void push(int item, node *ptr)
{
    if(ptr->top==MAX-1){
      printf("\n\n\t*******Overflow Error*******");
      printf("\n\n\tElement cant be inserted into stack ");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=item;
        printf("\n\n\tElement is pushed into stack");
    }
    getch();
}

// defination of pop function--->
void pop(node *ptr)
{
    int item;
    
    if(ptr->top<0)
        printf("\n\n\t************Underflow Error**********\n");
    else
    {
item=ptr->arr[ptr->top];
ptr->top--;
printf("\n\n\t Element [%d] is popped from the stack",item);
    }
    getch();
    return;
}

int main()
{
    int i, item;  char ch;
    node stack; // declaration of structure variable
    stack.top=-1;
    while(1)
    {
        //clrsc();
        system("cls");
        printf("\n\n\t************Main Menu**********\n");
            printf("\n\t  Array Representation of stack\n");
            printf("\n\t===============================\n");
            printf("\n\t1). Push Operation of stack\n");
            printf("\n\t2). Pop Operation of stack\n");
            printf("\n\t3). Exit\n");
            
            fflush(stdin);
            scanf("%c",&ch);
            switch(ch)
            {
                case '1':
            printf("\n\n\tEnter the number you want to add:\n");
            scanf("%d",&item);
            push(item,&stack);
                break;
                case '2':
      pop(&stack);
                break;
                
                case 3:
                  exit(0); // terminates the program  
                
            }
    } // end of loop
}





