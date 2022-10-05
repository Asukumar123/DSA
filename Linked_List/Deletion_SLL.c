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
struct Node *DeleteBegin(struct Node* head){
    struct Node *ptr=head;
    head=head->next;
free(ptr);
return head;
}

struct Node *DeleteEnd(struct Node* head){
    struct Node *p=head;
    struct Node *q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);

return head;
}
struct Node *DeleteBetween(struct Node* head,int index){
    struct Node *p=head;
    struct Node *q=head->next;
for (int i = 1; i < index-1; i++)
{
p=p->next;
q=q->next;
}
p->next=q->next;
free(q);
return head;
}
struct Node *Deletevalue(struct Node* head,int value){
    struct Node *p=head;
    struct Node *q=head->next;
while (q->next!=NULL && q->data!=value)
{
    p=p->next;
q=q->next;
}

if(q->data == value){


p->next=q->next;
free(q);
return head;
}
}
int main (){

struct Node *head, *second,*third,*fourth;
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));
 head->data=1;
 head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=fourth;
fourth->data=4;
fourth->next=NULL;

// head=DeleteBegin(head);
// head=DeleteEnd(head);
// head=DeleteBetween(head,2);
head=Deletevalue(head,2);

traversal(head);
}