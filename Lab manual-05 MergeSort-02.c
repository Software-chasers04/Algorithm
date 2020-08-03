
#include<stdio.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1+ j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

float median(int arr[],int n)
{

    float m = 0;
    if(n%2 == 0)
    {
        m = (arr[n-1]/2 + arr[n/2])/2.0;
    }
    else
    {
        m = arr[n/2];

    }
    return m;


}


int main()
{
    int arr[1000], n,sum =0,r=0;
    printf("Enter Number of Elements in Array : ");
    scanf("%d", &n);
    printf("Enter Elements of Array : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0,n - 1);
    printf("\nSorted Array is : ");
    printArray(arr, n);
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    printf("Sum: %d",sum);
    while(sum!=0){
        r += sum%10;
        sum = sum/10;
    }
printf("\nDigit of Sum: %d\n",r);
}
