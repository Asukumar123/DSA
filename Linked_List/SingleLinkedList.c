#include <stdio.h>
#include <stdlib.h>
// declaring hte struct of node
struct Node{
    int data;
    struct Node *next;
};
// function for traversal of array
void traversal(struct Node *ptr){
    while (ptr !=NULL)
    {
       printf("  %d  ",ptr->data);
     ptr =  ptr->next;
    }
    
}
int main (){
    //declaring pointer 
struct Node *head,*second,*third;


// assigning memory to pointer 
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
 
 
 //adding data and linking the pointers
head->data=7;
head->next=second;

second->data=8;
second->next=third;

third->data=9;
third->next=NULL;
// for traversing the array
traversal(head);
return 0;
}