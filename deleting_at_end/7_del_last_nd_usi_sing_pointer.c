/*
CREATING THE NODE AND DELETING THE LAST NODE OF THE SINGLY LINKED LIST

step 1: create the linked list
step 2: define a function to delete the last node of the linked list
    step 2.1 : create a pointer temp  and point it to the last node of the singly linked
              list.
    step 2.2 : free the memory of the temp pointer which is actually the lastt node of the linked list
              and assign NULL to it.so that it is no more become dangling.
step 3: traverse the list and print the data inside the linked list.     
*/
#include<stdio.h>
#include<stdlib.h>

/* CREATING THE NODE */
struct node{
    int data;
    struct node *link;
};

// DELETING A NODE AT THE END OF THE LINKED LIST
struct node *del_last_node(struct node*head)
{
    struct node*temp=head;
    while (temp->link->link!=NULL)
    {
        /* code */
        temp=temp->link;
    }
    free(temp->link);
    temp->link=NULL;

}
// ADDING A NODE AT THE END OF THE LINKED LIST
struct node *add_at_end(struct node *ptr,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    
    return temp;
}
void main()
{   
    /* CREATING THE HEAD NODE*/

    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=34;
    head->link=NULL;

    // ADDING THE NODE AT THE END OF THE LIST
    struct node *ptr=head;
    ptr=add_at_end(ptr,45);
    ptr=add_at_end(ptr,78);
    ptr=add_at_end(ptr,89);
    ptr=add_at_end(ptr,12);

    del_last_node(head);
    ptr=head;
    
    while(ptr!=NULL)
    {
        /* code */
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}