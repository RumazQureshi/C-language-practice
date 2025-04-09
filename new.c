#include<stdio.h>
int main(){
int cash;
printf("Enter the amount u want to withdraw: ");
scanf("%d",&cash);
int rupee100 = cash / 100;
cash = cash % 100;
int rupee50 = cash /50;
cash = cash % 50;
int rupee10 = cash /10;
printf("The cashier will give %d Rs.100/- notes. \n",rupee100);
printf("The cashier will give %d Rs. 50/- notes. \n",rupee50);
printf("The cashier will give %d Rs. 10/- notes. \n",rupee10);
return 0;
}
