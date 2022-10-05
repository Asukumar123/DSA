#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *next;
};
void traversal(struct Node *ptr){
while (ptr != NULL)
{
    printf(" %d ",ptr->data );
      ptr= ptr->next;
    
}
}
struct Node * insertBegin(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data =data;
    ptr->next=head;
    return ptr;
}


struct Node * insertEnd(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
      ptr->data =data;
      struct Node *p=head;
       while(p->next!=NULL){
        p=p->next;
        }
          p->next=ptr;
          ptr->next=NULL;
          return head;
}
struct Node * insertBetween(struct Node *head,int data,int index){
   
   
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
      int i=0;
       while(i!=index-1){
        p=p->next;
    i++;
        }
          ptr->data =data;
        ptr->next=p->next;
        p->next=ptr;
return head;
}
struct Node * insertAfterNode(struct Node *head,struct Node *PrevNode,int data){
     struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    ptr->data=data;
    ptr->next=PrevNode->next;
    PrevNode->next=ptr;
    return head;
}
int main (){

struct Node *head, *second,*third;
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
 head->data=1;
 head->next=second;
second->data=3;
second->next=third;
third->data=4;
third->next=NULL;

head=insertBegin(head,23);
head=insertEnd(head,43);
head=insertAfterNode(head,second,3);
head=insertBetween(head,456,3);
traversal(head);
return 0;
}