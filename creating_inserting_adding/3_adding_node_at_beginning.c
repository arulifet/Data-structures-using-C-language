// Creating a linked list and adding a node at the beginning of the list

#include<stdio.h>
#include<stdlib.h>

struct node {
    /* Data */
    int data;
    struct node *link;
};
struct node *add_at_beg(struct node *head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=head;
    head=ptr;
    return head;

}

void main()
{
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->data=90;
    head->link=NULL;
    
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=78;
    ptr->link=NULL;

    head->link=ptr;
    
    head=add_at_beg(head,45);
    ptr=head;
    while (ptr!=NULL)
    {
        /* code */
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    

}