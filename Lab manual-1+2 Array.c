#include<stdio.h>
int main()
{
    int i,A[100],j=0;
    for(i=1; i<=100; i++)
    {
        A[j]=i;
        j++;
    }
    for(i=0; i<100; i++)
    {
        printf("%d\n",A[i]);
    }
}
