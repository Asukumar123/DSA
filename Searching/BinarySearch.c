#include<stdio.h>
int Binary_Search(int arr[],int size, int element){
int low ,high,mid;
low=0;
high=size-1;



while(low<=high){

mid=(low+high)/2;  
if(element == arr[mid])
   return mid;
else if(element<arr[mid])
 high=mid-1;
else 
low=mid+1;
}
return -1;
}

int main()
    {
       
        int arr[]={1,2,4,5,67,89,98,99,109};
        int size=sizeof(arr)/sizeof(int);
        int element =99;
        int index=Binary_Search(arr,size,element);
        printf("The index of Element is %d",index+1);

}