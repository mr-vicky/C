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
        printf("\n\n\t Base Address    Number      Link");
        printf("\n ===================================");
    printf("\n%10u  %10d  %10u",start,start->data,start->link);
    for(temp=start->link;temp != start;temp=temp->link)
    printf("\n%10u  %10d  %10u",temp,temp->data,temp->link);
    getch();
    return;
    }

// ----------- Function to insert the node in the beginning------------------>
node *insertbeg(node *start)
    {
        node *temp,*end,*ptr;
        int num;
        char ch;
        ptr=start; // here the 'ptr' is containg the address of the first node
        do
        {
            end=ptr; // here the 'end' conatins the address of the first node
            ptr=ptr->link; // here 'ptr->link': conatains the address of the next node, here the address will be keep updating through the loop
        } while (ptr!=start);
        // by using the above loop we have will got the address of the last node in the variable 'end'

        printf("\n\n\t Enter the number to insert : ");
        scanf("%d",&num);
        temp=(node *)malloc(sizeof(node));  // Creating the new node using the dynamic memory allocation
        temp->data=num; // assigning the value of 'num' to the data of the temp
        temp->link=start; // here the 'temp' is going to set at the first loacation
        end->link=temp; // assigning the address of the new node into the link of the last node
        start=temp; // here the address of new node is putted into the 'start'
    return(start);
        
    }

// ------------- Function for Linear search -------------->
node* search(node *start,int num) // 'start'- contains the address of the first node, 'num'- contains the value to be searched
    {
        node *temp, *loc;
        loc=NULL; // here it means the pointer variable points nowhere
        temp=start; // 'temp': is our pointer counter variable
        do  
            {
                if(num==temp->data) // 
                    {
                        loc=temp;
                        break;  //'break' will take the control out of the loop blocks
                    }
                temp=temp->link; // updating the value of 'temp'
            }while(temp!=start); // this condition will false only at last node
        return(loc);
    }
    
// --------------- Insert After function -------------->
void insertafter(node *start)
    {
        node *temp, *loc;
        int num, data;
        
        printf("\n\n\t Enter the number after which you want to insert : ");
        scanf("%d",&data);
        loc=search(start,data); // calling the function search() by passing the 'address of the first node' and the 'data' of the node which to be serach
            if(loc==NULL)
                    printf("\n\t The number is not present in the LinkedList");
            else
                {
                    printf("\n\n\t Enter the number to be inserted : ");
                    scanf("%d",&num);
                    temp=(node *)malloc(sizeof(node));  // here the dynamically the new node is to be created
                    temp->data=num;
                    temp->link=loc->link;
                    loc->link=temp;
                }
    }
    

int main()
    {
        node *start;
        int choice, num, data;
        char ch;
        start=NULL; // intitially the start would contain the NULL
        while(1)    // Infinite Loop
            {
                //clrscr(); --->  this only works in the 'Terbo C'
                system("cls"); // will create the screen 
                fflush(stdin);
                printf("\n\t **** MAIN BLOCK ****\n");
                printf("\n\t 1. To Create the Circular Linklist");
                printf("\n\t 2. To insert in the Beginning");
                printf("\n\t 3. To insert after a Given node ");
                printf("\n\t 4. To  Display the Circular Linklist");
                printf("\n\t 5. Exit");
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
                                start=insertbeg(start); // calling the function insertbeg() by passing the 'start'- which is the address of the first node
                                break;
                        case 3: 
                                insertbeg(start);
                                break;
                        case 4:
                                printf("\n\n\t **** DISPLAY BLOCK ****\n");
                                display(start); // calling the display function
                                break;
                        case 5:
                            exit(0);
                    }
            }
    }

