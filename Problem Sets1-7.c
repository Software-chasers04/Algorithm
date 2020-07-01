#include<stdio.h>
int main()
{
    int A,B,GCD,R;
    scanf("%d %d",&A,&B);
    while(B!=0)
    {
        R = A%B;
        A = B;
        B = R;

    }
    GCD = A;
    printf("%d\n",GCD);
}
