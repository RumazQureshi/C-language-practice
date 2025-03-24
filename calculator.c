#include <stdio.h>
int main()
{

    int num1, num2, result;
    char operator;

    printf("enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    printf("enter operator\n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("the sum is %d\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("the sub is %d\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("multiply is %d\n", result);
        break;
    case '/':
 if (num2<=0)
 {
printf("denominator cannot less then nominaotr");
 }
 else
 {
     result = num1 / num2;
        printf("multiply is %d\n", result);
        break;} break;
   default:printf("operator sai dal ");
    }
   
    return 0;
}