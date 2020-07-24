#include<stdio.h>>

int main()
{
    int n,i,j, temp;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of Array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Bubble Sorted list in Descending order:\n ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }


return 0;
}




