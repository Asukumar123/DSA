#include<stdio.h>

int main(){
int A[]={1,2,3,4,5};
int B[]={6,7,8,9,10};
int c[n1+n2];
int n1=sizeof(A)/sizeof(int);
int n2=sizeof(B)/sizeof(int);
int k=0;
for(int i=0;i<n1;i++){
    c[k++]=A[i];
}
for(int i=0;i<n2;i++){
     c[k++]=B[i];
}
for(int i=0;i<n1+n2;i++){
    printf("%d", c[i]);
}