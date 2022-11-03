#include<stdio.h>


void PrintArray(int* A,int n){
    for(int i=0; i<n; i++){
         
         
         printf("%d ",A[i]);
   
    }
    printf("\n");
}
// main logic

void SelectionSort(int *A,int n){

   int indexOfMin,temp;
//    No of flags
for(int i=0; i<n-1; i++){          
     indexOfMin =i;

// No of comparsions
    for(int j=i+1;j<n;j++){

        if(A[j]<A[indexOfMin]){
        indexOfMin =j;
        }
    }
// Swapping the value
     temp=A[i];
    A[i]=A[indexOfMin];
    A[indexOfMin]=temp;
}

}



int main(){
    int A[]={3,5,2,13,12,6};
int n=sizeof(A)/sizeof(int);
  printf("---------The Orginal Array-------------\n");
 PrintArray( A ,n);
 SelectionSort( A, n);
  printf("---------The Sorted Array-------------\n");
 PrintArray( A ,n);

return 0;
}