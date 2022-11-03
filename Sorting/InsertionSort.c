#include<stdio.h>


void PrintArray(int* A,int n){
    for(int i=0; i<n; i++){
         
         
         printf("%d ",A[i]);
   
    }
    printf("\n");
}


int main()
    {
      
 
        int A[]={1,2,4,5,67,89,98,99,109};
        int n=sizeof(A)/sizeof(int);
         printf("---------The Orginal Array-------------\n");
          PrintArray( A ,n);
    printf("---------The Sorted  Array-------------\n");
       PrintArray( A ,n);
      
      

}