#include<stdio.h>

void PrintArray(int* A,int n){
    for(int i=0; i<n; i++){
         
         
         printf("%d ",A[i]);
   
    }
    printf("\n");
}


int partition(int A[],int low,int high){
    int i,j,temp;
   
    i=low+1;
    j=high;
    int pivot=A[low];
    // Dry Run kar Lena bsdk
   do{
    while(A[i]<=pivot){
        i++;
    }
      while(A[j]>pivot){
        j--;
    }
    if(i<j){
temp =A[i];
A[i]=A[j];
A[j]=temp;
    }
}
while(i<j);

    temp =A[low];
A[low]=A[j];
A[j]=temp;
return j;

}


void QuickSort(int A[],int low, int high){
    
    int  PartionIndex;
    if(low<high){
        PartionIndex=partition(A,low,high);
        QuickSort( A, low,PartionIndex-1 );
        QuickSort( A,PartionIndex+1,high);
    }
}

int main()
    {
       
        int A[]={1,3,2,5,4};
        int n=sizeof(A)/sizeof(int);
           printf("---------The Orginal Array-------------\n");
       PrintArray( A ,n);
      QuickSort( A,0,n-1);
        printf("---------The Sorted Array-------------\n");
       PrintArray( A ,n);
      
      return 0;

}