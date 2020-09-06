#include<stdio.h>
#include<stdlib.h>

struct node {
    /* Data */
    int data;
    struct node *link;
};

struct node *add_at_end(struct node *ptr,int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
}
void main()
{   
    // Creating the first node using malloc function
    struct node*head=(struct node*)malloc(sizeof(struct node ));
    struct node *ptr=NULL;
    head->data=4;
    head->link=NULL;
    
    // Creating the second node 
    struct node *current =(struct node*)malloc(sizeof(struct node));
    current->data=44;
    current->link=NULL;
    
    head->link=current;
    

    ptr=current;
    ptr=add_at_end(ptr,90);

    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}