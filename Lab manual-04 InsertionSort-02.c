#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of Array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int key,j;
    for(j=0; j<n; j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && key<a[i])
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
    printf("Insertion Sorted list in Ascending : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nDifference between max-min = %d\n",a[n-1]-a[0]);
    return 0;
}
