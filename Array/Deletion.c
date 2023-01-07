// i am making some changes to this repository to demonstrate the forking and pull request machanism
#include<stdio.h>
void PrintArray(int A[],int size){
    for(int i=0; i<size;i++){
        printf("%d  ",A[i]);
}
printf("\n");
}
int insertion(int A[],int size,int index,int capacity){
int  capicty=size+1;
if(size>=capacity){
 return -1;
}
for(int i=index;i<=size-1;i++){
    A[i]=A[i+1];

}
}
int main(){
  
int A[]={0,1,2,3,4,5,6};
int size=sizeof(A)/sizeof(int);
int index=4;
printf("The element to be deleted \n %d\n",index);
int  capacity=size+1;
printf("-----------Before Deletion-----\n");
PrintArray(A,size);

insertion( A, size, index,capacity);
printf("-----------After Deletion-----\n");
PrintArray(A,size-1);
}
