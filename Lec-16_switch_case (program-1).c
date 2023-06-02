#include<stdio.h>
int main()
{
    int i,age ;
    for(i=0;i<10;i=i+1)
    {
        printf("%d \n",i);
        printf("Enter the age");
        scanf("%d",&age);
        if(age>10)
        {
            break;
        }
    }
}
