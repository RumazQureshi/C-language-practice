#include <stdio.h>

int main(){

int count = 5;
float miles = 5.6;
char letter = 'x';
double atoms = 2500000;
printf("\n int %d \n float %f \n char %c \n double %lf\n",count,miles,letter,atoms);
printf(" address in Integers :\n int %d \n float %d char %d \n double %d \n",&count,&miles,&letter,&atoms);
printf(" address in Hex :\n int %x \n float %x \n char %x \n double %x \n",&count,&miles,&letter,&atoms);


return 0;
}
