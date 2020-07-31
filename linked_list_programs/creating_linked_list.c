// Creating a singly linked list and assigning datas to it and finally printing the data
#include<stdio.h> // standard input output .header file
#include<stdlib.h> // including C standard library
//Creating the node using structure
struct Node
{
    /* data */
    int data;
    struct Node *next; // pointer to the next node
};
 
 // user defined function to print the data in a linked list
void print_data(struct Node * head) 
{
    struct Node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

//Main function

void main()
{   // Creating the variables 
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    
    // Dynamically allocating memory to the nodes using malloc functions.
    head=(struct Node *)malloc(sizeof(struct Node ));
    second=(struct Node *)malloc(sizeof(struct Node ));
    third=(struct Node *)malloc(sizeof(struct Node ));
    
    // inserting data to the first node and linking it to the next node.
    head->data=2;
    head->next=second;

    second->data=5;
    second->next=third;

    third->data=20;
    third->next=NULL;

    // Calling the function to print the data stored in the linked list
    print_data(head);
  


    
    printf("\n");
    
    printf("Hello World");
}