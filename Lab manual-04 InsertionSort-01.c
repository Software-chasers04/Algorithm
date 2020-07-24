#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("enter the Array Size:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the Elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i]<A[j])
            {
                temp = A[i];
                A[i]= A[j];
                A[j] = temp;
            }
        }
    }
    printf("Descending Order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",A[i]);
    }


}
