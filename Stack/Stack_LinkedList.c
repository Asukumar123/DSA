#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node *ptr){
    while(ptr != NULL){
        printf("The data is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int isEmpty(struct Node* top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Node* top){
 struct Node* n =(struct Node*)malloc(sizeof(struct Node*));
 if(n==NULL){
    return 1;
 }
 else{
    return 0;
 }
}

struct Node* push(struct Node* top,int x){

    if(isFull(top)){
        printf("Stack overflow!");

    }
    else{
         struct Node* n =(struct Node*)malloc(sizeof(struct Node*));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
}
int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("stack underflow!");
    }
    else{
        struct Node* n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
       
        return x;
      
    }
}
     
int main (){
    struct Node* top=NULL;

  top = push(top, 1);
   top = push(top, 2);
   top = push(top, 3);
   top = push(top,4);
   top = push(top, 5);
   top = push(top,6);
   top = push(top, 7);
   top = push(top, 8);
   int element= pop(&top);

    pop(&top);
  pop(&top);
  pop(&top);
  pop(&top);
 
 
 
 
   
  traversal(top);

return 0;
}