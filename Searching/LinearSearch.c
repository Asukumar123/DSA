#include<stdio.h>

int linear_search(int arr[],int size,int element){
    
    for(int i=0;i<size;i++){
    if(arr[i]==element)
    return i;
    }
    return -1;
}
    int main()
    {
       
        int arr[]={1,2,4,5,67,7,89,69,56,89};
        int size=sizeof(arr)/sizeof(int);
        int element =69;
        int index=linear_search(arr,size,element);
        printf("The index of Element is %d",index-1);

}