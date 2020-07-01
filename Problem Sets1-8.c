#include<stdio.h>
int main()
{
    int A,B,p,q,GCD,LCM,R;
    scanf("%d %d",&p,&q);
    A = p;
    B = q;
    while(B!=0)
    {
        R = A%B;
        A = B;
        B = R;

    }
    GCD = A;
    LCM = (p*q)/ GCD;
    printf("%d\n",LCM);

}
