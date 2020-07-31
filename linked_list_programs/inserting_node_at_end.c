#include<stdio.h>
#include<stdlib.h>

struct node{
    /* Data */
    int data;
    struct node *link;
};


void add_at_end(struct node *head,int data)
{
    struct node *temp,*ptr;
    ptr=head;
    temp = (struct node *)malloc(sizeof(struct node*));

    temp->data=data;
    temp->link=NULL;

    while(ptr->link != NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}


// function to print the data in the linked list
void print_data(struct node *head)
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
}


void main()
{
    struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node*));
    second=(struct node*)malloc(sizeof(struct node*));
    third=(struct node*)malloc(sizeof(struct node*));
    
    head->data = 3;
    head->link=second;

    second->data = 30;
    second->link=third;

    third->data = 39;
    third->link=NULL;
    // Calling a function to add a node at the end.
    add_at_end(head,67);

   // Calling a function to print the data stored in the linked list
    print_data(head);


    printf("Hello World");
}