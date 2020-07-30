// LIST ADT
// Inserting an element at certain position in the list
#include<stdio.h>
#define n 10
void main()
{
    printf("Hello World\n");
    int list[n] = {1,2,3,4,5};
    int i,element , index;
    printf("Enter the element to be inserted:");
    scanf("%d",&element);
    printf("Enter the index position:");
    scanf("%d",&index);
    for(i=9;i>index;i--)
    {
        list[i+1]=list[i];

    }
    printf("Enter the elements in the list are:");
    for(i=0;i<n;i++)
    {
         printf("%d\n",list[i]);

    }

}