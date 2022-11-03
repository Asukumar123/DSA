#include <stdio.h>
#include <stdlib.h>
struct Circular_Queue
{
    int size;
    int f;
    int r;
    int *arr;
   
};
void Enqueue(struct Circular_Queue *q,int val){
    if((q->r+1)%q->size==q->f){
        printf("Queue is Full\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}
int Dequeue(struct Circular_Queue *q){
  int val;
    if(q->r==q->f){
        printf("Queue is Empty\n");
    }
    else{
        q->f=(q->f+1)%q->size;
       val=q->arr[q->f];
       
    }
     return val;
}
int main (){
struct Circular_Queue q;
q.size=7;
q.f=q.r=-1;
q.arr=(int*)malloc(q.size*sizeof(int));


Enqueue(&q,1);
Enqueue(&q,12);
Enqueue(&q,13);
Enqueue(&q,1);
Enqueue(&q,12);
Enqueue(&q,13);


printf("The value is %d\n",Dequeue(&q));
printf("The value is %d\n",Dequeue(&q));
printf("The value is %d\n",Dequeue(&q));
printf("The value is %d\n",Dequeue(&q));
printf("The value is %d\n",Dequeue(&q));
printf("The value is %d\n",Dequeue(&q));

return 0;
}