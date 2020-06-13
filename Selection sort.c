#include<stdio.h>
int main(){
  int n,i,j,min,temp,A[100];
   printf("Enter the number of Elements\n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        if(min!=i){
            temp =A[i];
            A[i]=A[min];
            A[min]=temp;
        }

    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",A[i]);
    }
}
