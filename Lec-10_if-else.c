//Write a if-else condition c-program that emplement 18 age older can vote,10 years older votes only kids and below cannot votes.

#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age \n");
    scanf("%d",&age);
    printf(" \n You have select the age %d \n",age);
    if(age>=18){
        printf("\n you are elegible for the vote \n");
    }
   else if(age>=10){
    printf("You are elagible for child vote !");
   }
   else{
    printf("You are not elegable for voting !");
   }

    return 0;
}
