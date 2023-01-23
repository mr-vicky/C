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
              return(start);
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
        printf("\n\n Base address       number      link");
        printf("\n ======================================");
    for(temp=start;temp != NULL; temp=temp->link)
    printf("\n%10u  %10d  %10u",temp,temp->no,temp->link);
    printf("\n\n\t Press any key to go to MAIN BLOCK.....");
        getch();
        return;
    }
    
node *insf(int item, node *start)
    {
        node *p; // '*p': is the pointer variable of data type 'node' 
        p=(node *)malloc(sizeof(node)); // creating the new node by using the dynamic memory allocation
        p->no=item; // assigning the value to new node
        p->link=start; // assigning start to link of new node
        start=p;      // now the new node is the first node 
printf("\n\n\t Element is successfully Inserted ");
        getch();
        return(start);
    }
    
int main()
    {
        node *start;
        int item, op;
        start=NULL; // here the starting from the NULL means the list is empty
        while(1)   // Infine loop
        {
             system("cls");     // clear the screen
        printf("\n1) Create the linked list");
        printf("\n2) Insert the new node in the beginning");
        printf("\n3) Display the linked list");
        printf("\n4) Exit");
        printf("\n5) Enter your option please");
        scanf("%d",&op);
        switch(op)
            {
            case 1:
                      start=create(start);
                      break;
            case 2:
                      printf("Enter the value: ");
                      scanf("%d",&item);
                      start=insf(item,start); /* calling the functions by passing the parameters--> 
                                                'item': data of new node will be putted in
                                                'start': In the start the address of new node is stored */
                      break;
            case 3:
                      print(start);
                      break;
            case 4:
                      exit(0);      // terminates the program
            } // end of switch case
        } // end of loop
        
    } // end of main(), function
       
    
    
    
    
