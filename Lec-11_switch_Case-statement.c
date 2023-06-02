#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age \n ");
    scanf("%d",&age);

    switch(age)
    {
    case 3:
        printf("Age is 3 \n");
        break;
    case 13:
        printf("Age is 13 \n");
        break;
    case 23:
        printf("Age is 23 \n");
        break;
    default:
        printf("Age is not matched like 3,13 And 23");
    }
}
