
#include<stdio.h>
int main()
{
    int A[100],i,n;
    printf("Enter the number of elements:\n ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    quicksort(A,0,n-1);
    printf("Sorted Element:");
    for(i=0; i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}
int partition( int A[],int lb,int ub)
{
    int temp;
    int pivot = A[lb];
    int s = lb;
    int e = ub;
    while(s<e)
    {
        while(A[s]<= pivot)
        {
            s++;
        }

        while(A[e]> pivot)
        {
            e--;
        }

        if(s<e)
        {
            temp = A[s];
            A[s] = A[e];
            A[e] = temp;
        }
    }
    temp = A[lb];
    A[lb] = A[e];
    A[e] = temp;
    return e;
}

void quicksort(A,lb,ub)
{
    if (lb< ub)
    {
        int loc = partition(A,lb,ub);
        quicksort(A,lb,loc-1);
        quicksort(A,loc+1,ub);
    }
}


