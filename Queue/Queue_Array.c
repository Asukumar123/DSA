

#include <stdio.h>
#include <stdlib.h>
// declaring the Strucutre of Queue
struct Queue{  
    int size;
    int f;
    int r;
    int *arr;
};

// some Function of Queue
int isEmpty(struct Queue *q){
    if(q->f==q->r){
    return 1;
}
return 0;
}

int isFull(struct Queue *q){
    if(q->r==q->size-1){
    return 1;
}
return 0;
}
// inserting a value
int EnQueue(struct Queue *q,int val){
    if(isFull(q)){
        return 0;
    }
    else{
        q->r++;
        q->arr[q->r]=val;

    }
}
// retriving the value
int DeQueue(struct Queue *q){
    if(isEmpty(q)){
        return 0;
    }
    else{
        q->f++;
       return q->arr[q->f];
        }
}

// main function begins

int main (){
    // Implementing the Queue
struct Queue q;
q.size=3;
q.f=q.r=-1;
q.arr=(int*)malloc(q.size*sizeof(int));

EnQueue(&q,1);
EnQueue(&q,12);
EnQueue(&q,18);

printf("the value is %d \n", DeQueue(&q));
printf("the value is %d \n", DeQueue(&q));
printf("the value is %d \n", DeQueue(&q));


 if(isFull(&q)){
       printf("Full Baby!");
    }
return 0;
}