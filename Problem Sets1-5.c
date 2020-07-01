#include<stdio.h>
int main()
{
    int Fibo[45],A,i;
    Fibo[0]=0;
    Fibo[1]=1;
   for(i=2;i<=45;i++){
    Fibo[i]=Fibo[i-1]+Fibo[i-2];
   }
    scanf("%d",&A);
    printf("%d\n",Fibo[A]);
}
