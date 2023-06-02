#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter the age \n");
    scanf("%d",&age);
    printf("Enter the marks \n");
    scanf("%d",&marks);
    switch(age)
    {
    case 3:
        printf("Age is 3 \n");
        switch(marks)
        {
            case 45:
            printf("your marks is 45");
            break;

            default:
                printf("Yours marks is not 45");
        }
        break;
    }

}
