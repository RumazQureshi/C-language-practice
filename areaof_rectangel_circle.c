#include <stdio.h>

int main(){

    float l,b,r;


printf("Input Lenght of Rectangle:");
scanf("%f",&l);

printf("Input Breadth of Rectangle:");
scanf("%f",&b);

printf("Input Radius of Circle:");
scanf("%f",&r);


printf("Area of Rectangle is = %.0f\n",l*b);
printf("perimeter of Rectangle is = %.0f\n",2*(l+b));
printf("Area of Circle is = %.0f\n",3.14*r*r);
printf("Circumference of Circle is = %.0f\n",2*3.14*r);

return 0;
}
