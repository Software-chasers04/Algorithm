#include<stdio.h>
int binary_search(int A[], int n, int x)
{

    int l,r,mid;
    l = 0;
    r = n-1;
    while(l<=r)
    {
        mid = (l+r)/2;

        if( A[mid]== x)
        {
            printf("Found the searching  element.\n");
            break;
        }

        if(A[mid]<x)
        {
            l= mid+1;
        }
        else
            r = mid-1;
    }
    if(l>r)
        printf("Not founf the searching element.\n")
    }
int main()
{
    int n,f,a,b,l,mid,i,s,A[100];
    printf("Enter any positive number:\n");
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter Search element:\n");
    scanf("%d",&b);
    binary_search(A,a,b);
}


