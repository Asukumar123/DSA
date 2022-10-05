#include<stdio.h>


void PrintArray(int* A,int n){
    for(int i=0; i<n; i++){
         
         
         printf("%d ",A[i]);
   
    }
    printf("\n");
}
// main logic

void SelectionSort(int *A,int n){
    printf("------The sorted Array----\n");
   int min,temp;
//    No of flags
for(int i=0; i<n; i++){          
     min =i;

// No of comparsions
    for(int j=i+1;j<n;j++){

        if(A[j]<A[min]){
        min =j;
        }
    }
// Swapping the value
     temp=A[i];
    A[i]=A[min];
    A[min]=temp;
}

}



int main(){
    int A[]={3,5,2,13,12,6,78,97,5,77,4,67,8888};
int n=sizeof(A)/sizeof(int);

 PrintArray( A ,n);
 SelectionSort( A, n);
 PrintArray( A ,n);

return 0;
}