#include<stdio.h>
int main(){
int i,n,K,A[100];
printf(" Enter Array Length:\n");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&A[i]);
}
scanf("%d",&K);
for(i=0;i<n;i++){
    if(A[i]== K){
        printf("Found\n");
        break;
    }
}
if(i==n){
     printf("Not Found\n");
}
}
