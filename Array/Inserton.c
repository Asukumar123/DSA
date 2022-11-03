#include<stdio.h>
int insertion(int A[],int size,int index,int element,int capacity){
int  capicty=size+1;
if(size>=capacity){
 return -1;
}
for(int i=size-1;i>=index;i--){
    A[i+1]=A[i];

}
A[index]=element;
return 1;

}
void PrintArray(int A[],int size){
    for(int i=0; i<size;i++){
        printf(" %d ",A[i]);
}
printf("\n");
}

int main(){
  
int A[]={23,56,78,98,6,5,4};
int size=sizeof(A)/sizeof(int);
int index=1;
int element=9;
printf("The element to be inserted \n%d\n",element);

int  capacity=size+1;
printf("-----------Before insertion-----\n");
PrintArray(A,size);

insertion( A, size, index, element, capacity);
printf("-----------After insertion-----\n");
PrintArray(A,size+1);
}