#include<stdio.h>
#include<string.h>
struct person{
    char name[50];
    int age;
    char home[50];
    char uni[50];
}p1;
int main(){
printf("Enter Person Information:\n");
printf("Name: ");
scanf("%s",p1.name);
printf("Age: ");
scanf("%d",&p1.age);
printf("Home: ");
scanf("%s",p1.home);
printf("University: ");
scanf("%s",p1.uni);
printf("Name:%s\n ",p1.name);
printf("Age:%d\n",p1.age);
printf("Home:%s\n",p1.home);
printf("University:%s\n",p1.uni);
return 0;
}

