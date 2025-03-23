#include<stdio.h>
int main(){
int age;
printf("enter your age \n");

scanf("%d",&age);
printf("you enter your age %d\n",age);
if (age >=18)
{
 printf("you are eligible for vote");
}
else
{
    printf("you are not eligible for vote");
}

return 0;
}