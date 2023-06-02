#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number \n");
    scanf("%d",&a);
    printf("Table of %d is \n",a);
    printf(" \n ");
    for(b=1;b<=20;b++)
        printf("%d * %d = %d \n",a,b,a*b );
    return 0;
}
