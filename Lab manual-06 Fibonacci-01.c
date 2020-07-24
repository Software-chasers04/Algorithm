
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number:\n");
    scanf("%d",&n);
    printf("Fibonacci Number: %d",fibo(n));
    getchar();
    return 0;

}

int fibo(int n)
{

    if(n<=1)
        return n;
    return fibo(n-1) + fibo(n-2);
}
