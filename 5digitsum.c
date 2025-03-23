#include <stdio.h>

int main(){

int rem,num,sum =0;

printf("Enter 5 digit number: ");
scanf("%d", &num);

rem=num%10000;
num=num/10000;
sum=sum+num;

num=rem/1000;
rem=rem%1000;
sum=sum+num;

num=rem/100;
rem=rem%100;
sum=sum+num;

num=rem/10;
rem=rem%10;
sum=sum+num;

num=rem/1;
rem=rem%1;
sum=sum+num;
printf("the sum of these 5 didts is:%d\n",sum);





return 0;
}
