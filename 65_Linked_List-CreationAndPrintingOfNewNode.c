#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//#include<alloc.h>
typedef struct linklist
    {
        int no; // variable which will store the data part 
        struct linklist *link; // '*link'--> is the pointer variable, which contains the address of the next node
    }node; // this is the short(second) name of the structure
char ch;   

// 'create'--> is the function which willl create the new linked list
node *create(node *start) //'*start'--> is the formal parameter
    {
        node *temp, *p;
        ch = 'y';
        //clrsc();
        printf("\n\t\t**** INPUT BLOCK ****");
        if(start!= NULL)
          {
              printf("\n\n\t **** LIST ALREADY EXITS ****");
              getch();
              return(start); // returning start
          }
        fflush(stdin);
        while(ch=='y')
          {
              temp=(node*)malloc(sizeof(node));
              printf("\n\t  Enter the no :==> ");
              scanf("%d",&temp->no);
              temp->link=NULL;
              if(start == NULL)
                p=start=temp;
              else
               {
                   p->link=temp;
                   p=temp;
               }
               fflush(stdin);
               printf("\t Do you want to continue (y/n) ? :");
               ch=getchar();
          } // end of loop
          return(start);
    }
    
void print(node *start)
    {
        node *temp;
        system("cls");
        printf("\n\n Base address number link");
        printf("\n ===========================");
    for(temp=start;temp != NULL; temp=temp->link)
    printf("\n%10u  %10d  %10u",temp,temp->no,temp->link);
    printf("\n\n\t Press any key to go to MAIN BLOCK.....");
        getch();
        return;
    }
    
int main()
    {
        node *start;
        
        start=NULL;
        
                start=create(start);
                 print(start);
    
    }
    
        
