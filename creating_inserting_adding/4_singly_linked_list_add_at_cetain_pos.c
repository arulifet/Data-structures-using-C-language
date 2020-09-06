/* INSERTING THE ELEMENT AT THE CERTAIN POSITION OF THE LINKED LIST */

#include<stdio.h>
#include<stdlib.h>

// CREATING THE STRUCTURE OF THE NODE
struct node{
    int data;
    struct node *link;
};

// DEFINING FUNCTION TO ADD THE NODE AT THE END OF THE LINKED LIST
struct node *add_at_end(struct node*head,int data)
{
    struct node*ptr=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node ));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
}

// MAIN FUNCTION
void main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *ptr=NULL;
    head->data=4;
    head->link=NULL;
    ptr=head;
    ptr=add_at_end(ptr,5);
    ptr=add_at_end(ptr,78);
    ptr=add_at_end(ptr,43);

    // Adding at the certain position 
    
    struct node *mid=(struct node*)malloc(sizeof(struct node));
    
    ptr=head;
    int element ,position;

    // GETTING INPUT FROM THE USER
    printf("Enter the element to insert:");
    scanf("%d",&element);

    printf("Enter the position to insert:");
    scanf("%d",&position);  

    // ADDING A NODE AT THE CERTAIN POSITION OF THE LINKED LIST
    mid->data=element;
    mid->link=NULL;q

    position--;
    while(position!=1)
    {   
        position--;
        ptr=ptr->link;
    }
    mid->link=ptr->link;
    ptr->link=mid;
    


   
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

}