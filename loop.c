#include <stdio.h>
int main(){
int n;
int sum=0;
printf("enter number \n");
scanf("%d",&n);
if (n<=1)
{
    break;
}else if (n%2 == 0 && n%3==0)
{
    break;
}else
{
    for (int i = 0; i <=n; i++)
    {
        sum+=i;
    }
    
}printf("yes its factorial\n");







    return 0;
}
