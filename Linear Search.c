#include<stdio.h>
int main()
{
    int A[100],s,i,n;
    printf("Enter Number of elements/n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter Search number\n");
    scanf("%d",&s);

    for(i=0; i<n; i++)
    {
        if(A[i]==s)
        {
            printf("%d present at location%d\n",s,i+1);
            break;
        }

    }
    if(i==n)
    {
        printf("%d isnt present in the array\n",s);
    }
    return 0;
}
