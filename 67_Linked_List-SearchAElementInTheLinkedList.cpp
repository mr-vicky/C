	/*-------------- SEARCHING A Node -----------------*/
//----->here some error comes in printing the value of number
	#include<stdio.h>
	#include<stdlib.h>
	#include<conio.h>
	// #include<alloc.h>
	typedef struct linklist
	    {
	        int no; // 'no': data
	        struct linklist *link; // '*link' is a pointer variable to store the address of the Node
	    }node; // 'node' is the short name given to the structure using typedef
	char ch;
	node *create(node *start)
	    {
	        node *temp, *p;
	        ch ='y';
	        // chrscr();
	        printf("\n\n\t **** INPUT BLOCK ****\n");
	        if(start != NULL)
	            {
	                printf("\n\n\t**** LIST ALREADY EXIST ****");
	                getch();
	                return (start);
	            }
	        fflush(stdin);
	        while(ch =='y')
	            {
	                temp=(node *)malloc(sizeof(node));
	                printf("\n\t Enter the number :==> ");
	                scanf("%d",&temp->no); // here the 'number' is stored in the pointer varable 'temp' of data type 'node'
	                temp->link=NULL; // assigning the value 'NULL' to the link of pointer variable 'temp'
	                if(start == NULL)
	                    p=start=temp;
	                else
	                    {
	                        p->link=temp; // the 'temp' address of the node is assigned to the link in the pointer varaiable 'p'
	                        p=temp;
	                    }
	                    fflush(stdin);
	                    printf("\t DO you want to continue (y/n) ? : ");
	                    ch=getchar();
	            } // end of loop
	            return (start);
	    }
	    
	    
	void print(node *start)
	    {
	        node *temp;
	        // clrsc(); system("clr");
	        printf("\n\nBase Address    Number    Link");
	        printf("\n=================================");
	    for(temp=start; temp!=NULL; temp=temp->link) // starting of 'for looop' block
	    printf("\n%10u  %10d   %10u",&temp,&temp->no,&temp->link); /* storing the addresses and data */
	    printf("\n\nPress any key to goto MAIN BLOCK...");
	        getch();
	        return;
	    }
	
	node *insf(int item,node *start)
	    {
	        node *p; // *p is the pointer variable of data type node, and 'p' is the variable to store the address of the node
	        p=(node*)malloc(sizeof(node)); // creating new node using dynamic memory allocation
	        p->no=item; // assigning value to new node 
	        p->link=start; // assigning start to link of new node
	        start=p; // now the new node is the first node
	printf("\n\n\t Element is successfully Inserted ");
	        getch();
	        return(start);
	    }
	    
	// Searching Function------->    
	node *search1(int item,node *start) // '*start'--> here it contains the address of the first node  
	    {
	        node *temp;
	        for(temp=start;temp != NULL; temp=temp->link)
	            {
	                if(temp->no=item) // if found
	                    return(temp);
	            }
	            return(NULL);       // not found then return NUll
	    }
	
	int main()
	    {
	        node *start,*temp; // '*start,*temp' here both are pointer variable of node data type
	        int item, op;
	        start=NULL;
	        while(1) // infine loop
	        {
	                system("cls"); // clears the screen
	            printf("\n1) Create the linked list");
	            printf("\n2) Insert the new node in the beginning");
	            printf("\n3) Search a new node");
	            printf("\n4) Dislpay the linked list");
	            printf("\n5) EXIT");
	            printf("\nEnter your option please ");
	            scanf("%d",&op);
	            switch(op)
	            {
	            case 1:
	                        start=create(start);
	                        break;
	            case 2:
	                        printf("Enter the value");
	                        scanf("%d",&item);
	                        start=insf(item,start);
	                        break;
	            case 3:     
	                        printf("\n\n\t Enter the number to be found ==> ");
	                        scanf("%d",&item);
	                        temp=search1(item,start); // calling the searching function by passing the arguments
	                        if(temp!=NULL)
	                            {
	                                printf("\n\n\tThe number is found");
	                                printf("\n\n\tThe address of location is = %d",temp);
	                            }
	                        else
	                            {
	                                printf("\n\n\t Number not found in linklist ");
	                                getch();
	                                break;
	                            }
	            case 4:   
	                        print(start);
	                        break;
	            
	            }
	            
	        }
	        
	    }
	

