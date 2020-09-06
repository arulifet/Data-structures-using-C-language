/*
CREATING THE NODE AND DELETING THE LAST NODE OF THE SINGLY LINKED LIST

step 1: create the linked list
step 2: define a function to delete the last node of the linked list
    step 2.1 : create a two pointers temp and temp2 and point it to the last node and second last node of the singly linked
              list.
    step 2.2 : assign NULL to the second last node of the singly linked list
    step 2.3 : free the memory of the temp pointer which is actually the lastt node of the linked list
              and assign NULL to it.so that it is no more become dangling.
    step 2.4 : return the head pointer to the main function so that the changes will get reflected.
step 3: traverse the list and print the data inside the linked list.     
*/

#include<stdio.h>
#include<stdlib.h>

/* CREATING THE NODE */
struct node{
    int data;
    struct node *link;
};

struct node *del_last_node(struct node*head)
{   if(head==NULL){
        printf("The list is already empty.");
    }

    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }

    else
    {
    struct node *temp=head;
    struct node *temp2=head;

    while(temp->link!=NULL)
    {
        temp2=temp; 
        temp=temp->link;
    }
    temp2->link=NULL;
    free(temp);
    temp=NULL;

    return head;
    
    }
}

struct node *add_at_end(struct node*ptr,int data)
{   
    struct node *temp=(struct node*)malloc(sizeof(struct node));
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
    
    ptr=head;
    head=del_last_node(head);

    ptr=head;
    // TRAVERSING THE LINKED LIST AND PRINTING THE DATA
    while (ptr!=NULL)
    {
        /* code */
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    

}