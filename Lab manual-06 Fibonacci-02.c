
#include<stdio.h>
int main()
{
    int n,i,a;
    printf("Test case:\n");
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        printf("Number %d :",i);
        scanf("%d",&n);

        printf("Fibonacci Number %d: %d\n",i,fibo(n));
    }
    getchar();
    return 0;

}

int fibo(int n)
{
    int f[n+2],i;
    f[0]=0;
    f[1]=1;
    for(i=2; i<=n; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }

    return f[n];
}

