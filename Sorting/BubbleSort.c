#include<stdio.h>

void PrintArray(int* A,int n){
    for(int i=0;i<n;i++)
    {
        
         printf("%d ",A[i]);
}
printf("\n");
}


 
void BubbleSort(int *A,int n){
    int temp;
int flag =0;
 for( int i=0;i<n-1;i++ ){
printf("Sorted in %d Steps\n",i+1);
flag =1;

for(int j=0;j<n-1-i;j++){
   if( A[j]>A[j+1]){
  int  temp=A[j];
   A[j]=A[j+1];
    A[j+1]=temp;
    flag=0;
   
   }
}
if(flag)
return;
}

}

int main()
{
    int A[]={1,2,6,4};
int n=sizeof(A)/sizeof(int);

 PrintArray( A ,n);
 BubbleSort( A, n);
 PrintArray( A ,n);

return 0;

}
