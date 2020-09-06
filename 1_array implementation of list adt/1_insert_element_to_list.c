// LIST ADT
// Inserting an element at certain position in the list
#include<stdio.h>
int add_at_end(int cur_pos,int element, int list[])
{
    list[cur_pos]=element;
    cur_pos++;
    return cur_pos;
}
void main()
{
    printf("Hello World\n");
    int list[10];
    int i,element;
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&list[i]);

    }
    int currentposition = n;
    printf("Enter the element to be inserted:");
    scanf("%d",&element);
    currentposition=add_at_end(currentposition,element,list);
    
    for(i=0;i<currentposition;i++){
        printf("%d ",list[i]);

    }
    // printf("Enter the element to be inserted:");
    // scanf("%d",&element);
    // printf("Enter the index position:");
    // scanf("%d",&index); 

}