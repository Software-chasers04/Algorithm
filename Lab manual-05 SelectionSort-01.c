
#include <stdio.h>
int main()
{
 int a[100], n, i, j,r,min_idx,temp;
 printf("Enter Number of Elements n :");
 scanf("%d", &n);
 printf("Enter %d Numbers n: \n", n);
 for (i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 }

 for (i = 0; i < n-1; i++)
 {
 min_idx = i;
 for (j = i+1; j < n; j++)
 {
 if (a[j] < a[min_idx])
 {
 min_idx = j;
 }
 }
 temp = a[min_idx];
 a[min_idx] = a[i];
 a[i] = temp;
 }
 printf("\nSorted Array:\n");
 for(i = 0; i < n; i++)
 {
 printf("%d ", a[i]);
 }
 r = pow(n,2);
 printf("\nResult:%d\n",r);
 return 0;
}
