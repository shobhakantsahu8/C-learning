#include<stdio.h>

int main (){
    int i,age;
    printf("Enter your age:");
    scanf("%d",&age);
    for(i=0;i<20;i+1){
        printf("your age is %d",age);
        scanf("%d",&age);
        if(age<18){
       break;}
           if(age>18){
        continue;}
    }
        printf("\ndidnt find any continue statement\n");
    }



