#include<stdio.h>
#define MIN(x,y)(((x)<(y))?(x):(y))
int main()
{
int coin[]={1,2,8,12};
printf("Conn Need:%d\n",coin_change(coin,16,3));
return 0;

}
int coin_change(int coin[],int change,int tcoin)
{

    int M[change+1];
    M[0]=0;
    for(int i=1; i<=change; i++)
    {
        int min = change+1;
        for(int j=1; j<=tcoin; j++)
        {
            if(i>=coin[j])
            {
                min= MIN(min, 1+M[i-coin[j]]);
            }
        }
        M[i]= min;
    }
    return M[change];
}
