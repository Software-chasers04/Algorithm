#include<stdio.h>
int funny(){

printf("This is user define function\n");
}

int main(){
printf("this is a main Function\n");
int n;
scanf("%d",&n);
if(n==1)
    funny();
else
    printf("Wrong Input\n");
return 0;
}
