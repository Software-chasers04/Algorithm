#include<stdio.h>
int addNum(int n)
{
    if(n!=0)
    {
        return n+addNum(n-1);
    }
    else
    {
        return n;
    }
}
int main()
{
    int A;
    scanf("%d",&A);
    printf("Sum is = %d",addNum(A));
}
