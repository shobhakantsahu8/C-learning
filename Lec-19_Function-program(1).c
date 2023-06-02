//Example of With arguments and with return value.

#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b,c;
    a=76;
    b=4;
    c=sum(a,b);
    printf("The sum of %d \n",c);
}
