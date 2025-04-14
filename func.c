#include <stdio.h>
float converttemp(float celcius);

int main(){
float far = converttemp(40);
printf("farenhite is %f ", far);
    return 0;
 }
float converttemp(float celcius){
float far = celcius * 1.8 + 32;
    
return far;
}
