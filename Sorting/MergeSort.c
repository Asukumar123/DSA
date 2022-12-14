#include<stdio.h>

void PrintArray(int* A,int n){
    for(int i=0; i<n; i++){
         
         
         printf("%d ",A[i]);
   
    }
    printf("\n");
}
void Merge(int A[],int low,int mid,int high){
    int i,j,k,B[100];
     i=low;  j=mid+1;  k=low; 
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
           i++;
            k++;
        }
            else{
              B[k]=A[j];
               j++;
               k++;
            }
            } 
    while (i<=mid){
        B[k]=A[i];
          k++;
          i++;
    }    
    while (j<=high){
        B[k]=A[j];
        k++;
        j++;
    }   
    
    for(int i=low; i<=high; i++){
          A[i]=B[i];
}         
}


void MergeSort(int A[],int low, int high){
    int mid;
    if(low<high){
         mid=(low+high)/2;
        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
        }

    }

int main()
    {
         int A[]={1,3,2,5,4};
        int n=sizeof(A)/sizeof(int);
      
           printf("---------The Orginal Array-------------\n");
       PrintArray( A ,n);
      MergeSort( A, 0,4);
         printf("---------The Sorted Array-------------\n");
       PrintArray( A ,n);
      
      return 0;

}