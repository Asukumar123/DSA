#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty( struct stack *ptr){
    if( ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull( struct stack *ptr){
    if( ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack overflow! %d\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("The val is %d\n",val);
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow!\n");
        return -1;
    }
    else{
       int val=ptr->arr[ptr->top];
       ptr->top--;
    return val;
    }
}

int peek(struct stack *ptr,int i){
    int arrind =ptr->top-i+1;
    if(arrind < 0){
    printf("not a valid position!");
    return -1;
    }
else
{
    return ptr->arr[arrind];
}
}

int stacktop(struct stack* ptr){
    return ptr->arr[ptr->top];
}
int stackbottom(struct stack* ptr){
    return ptr->arr[0];
}

int main (){
   struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
   sp->size=10;
   sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));




push(sp,28);
push(sp,42);
push(sp,24);
push(sp,2);
push(sp,92);
push(sp,14);

for (int j = 1; j < sp->top + 1; j++)
{
   printf("Element at index %d and the element is %d\n",j,peek(sp,j));
}
printf("starting Element is %d\n",stackbottom(sp));
printf("last element is %d\n",stacktop(sp));


printf("Poped Element is %d\n",pop(sp));
printf("Poped Element is %d\n",pop(sp));
printf("Poped Element is %d\n",pop(sp));


return 0;

}