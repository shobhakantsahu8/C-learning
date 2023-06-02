#include<stdio.h>
int main()
{
    int num;
    for(int i=0;i<10;i++)
    {
        printf("%d \n",i);
         for(int i=0;i<10;i++);
         {
             printf("Enter the number . Enter 0 to exit");
             scanf("%d",&num);
             if(num ==0)
             {
                goto end;

             }

         }


    }
        end:
}
