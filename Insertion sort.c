#include<stdio.h>
int main()
{
    int n,i,j,item,A[100];
    printf("Enter the number of Elements\n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1; i<n; i++)
    {
        item = A[i];
        j = i-1;
        while(j>=0 && A[j]>item)
        {
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1]=item;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",A[i]);
    }
}
