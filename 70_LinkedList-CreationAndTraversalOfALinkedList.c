//----------- Creating a Circular Linked List and Traversing it ----->
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct clist
    {
        int data; 
        struct clist *link; // variable to store the link of the next node
    };
typedef struct clist node; // giving the short name using the typedef function

//------------- create function -------------->
node * create(node *start)
    {
        node *temp, *ptr;   // ptr will store the address of the previous node
                            // temp will used to traverse the linked through linked list
        char ch;
        int num;
        do
            {
                printf("\n\t Enter the value of number : ");
                scanf("%d",&num);   // this 'num' value will be assigned to the new node
                temp=(node *)malloc(sizeof(node)); // dymamic memory allocation, here the new node will be generated
                temp->data=num; // 'temp'- is containing the address of the new node
                if(start==NULL) // here this condition will be 'true' for very first time only because the start conatains the 'NULL' at the3 first
                    {
                        start=temp;// assigning the value of 'new node' into the 'start'
                        ptr=start; // assigning the value of start into 'ptr' also
                    }
                else 
                    {
                        ptr->link=temp;
                        ptr=ptr->link; // ptr=temp
                    }
                temp->link=start;
                printf("\n\t Do you want to add more nodes (y/n)? : ");
                    fflush(stdin);
                    scanf("%c",&ch);
            } while(ch=='y'|| ch=='y');
        return(start);
    }

// ------------ Display Function ------------->
void display(node *start)
    {
        node *temp;
        printf("\n\n   Base Address   Number    Link");
        printf("\n ===================================");
    printf("\n%10u  %10d  %10u",start,start->data,start->link);
    for(temp=start->link;temp != start;temp=temp->link)
    printf("\n%10u  %10d  %10u",temp,temp->data,temp->link);
    getch();
    return;
    }

int main()
    {
        node *start;
        int choice, num, data;
        char ch;
        start=NULL; // intitially the start would contain the NULL
        while(1)    // Infinite Loop
            {
                //clrscr();
                system("cls"); // will create the screen 
                fflush(stdin);
                printf("\n\t **** MAIN BLOCK ****\n");
                printf("\n\t 1. To Create the Circular Linklist");
                printf("\n\t 2. To Display the Circular Linklist");
                printf("\n\t 3. Exit");
                printf("\n\t\t Enter your Choice ==> ");
                scanf("%d",&choice);
                system("cls");
                switch(choice)
                    {
                        case 1: 
                                printf("\n\n\t **** CREATE BLOCK ****\n");
                                start=create(start);  /* the create() function is only called when the circular linkedlist
                                                    is empty calling the create function by passing the start  
                                                    - here we can say that the value of start would be 'NULL' here after that it will change*/
                                 break;
                        case 2:
                                printf("\n\n\t **** DISPLAY BLOCK ****\n");
                                display(start); // calling the display function
                                break;
                        case 3:
                            exit(0);
                    }
            }
    }

