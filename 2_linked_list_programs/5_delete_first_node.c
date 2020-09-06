/*
CREATING THE NODE AND DELETING THE FIRST NODE OF THE SINGLY LINKED LIST

step 1: create the linked list
step 2: define a function to delete the first node of the linked list
    step 2.1 : create a pointer temp and point it to the head
    step 2.2 : move the head and point it to the next node 
    step 2.3 : free the memory of the temp pointer which is actually the first node of the linked list
    step 2.4 : return the head pointer to the main function so that the changes will get reflected.
step 3: traverse the list and print the data inside the linked list.     
*/

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *delete_first_node(struct node*head)
{
    
    if(head==NULL)
    {
        printf("Null ");
    }
    else
    {   struct node*temp=head;
        
        head=head->link;
        free(temp);
        temp=NULL;
    }
    return head;
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

    
    
    head=delete_first_node(head);


    ptr=head;

    // TRAVERSING THE LINKED LIST AND PRINTING THE DATA
    while (ptr!=NULL)
    {
        /* code */
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    


}
