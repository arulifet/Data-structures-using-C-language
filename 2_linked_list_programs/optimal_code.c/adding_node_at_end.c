// Optimal code for adding a node at the end of the linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *add_at_end(struct node*ptr,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node *));

    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;
    return temp;

}


void main()
{
    struct node *head,*ptr;

    // Dynamically allocating memory using malloc
    head=(struct node *)malloc(sizeof(struct node));

    head->data=3;
    head->link=NULL;

    ptr=head;

    ptr=add_at_end(ptr,64);
    ptr=add_at_end(ptr,45);
    ptr=add_at_end(ptr,78);
    ptr=add_at_end(ptr,80);
    ptr=add_at_end(ptr,89);

    ptr=head;    

    printf("Hello World\n");

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
 
}
