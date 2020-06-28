#include<stdio.h>
int main()
{
    char A[] = "Afrin";
    printf("Name:%s\n",A);

    char A1[10] = "Afrin";
    printf("Name:%s\n",A);

    char A2[] = {'A','F','R','I','N','\0'};
    printf("Name:%s\n",A);

    char A3[10] = {'A','F','R','I','N','\0'};
    printf("Name:%s\n",A);

    char A4[10];
    scanf("%s",A4);
    printf("Name:%s\n",A);
    return 0;

}
