#include <stdio.h>

int main() {
    float basic_salary; 
    float dearness_allowance; 
    float house_rent;
    float gross_salary;

    printf("Enter Aslam's basic salary: ");
    scanf("%f", &basic_salary);

    printf("40/ dearnace allowance which is: %.0f Rs.\n",dearness_allowance = 0.4 * basic_salary);
    printf("20/ house rent which is: %.0f Rs.\n",house_rent = 0.2 * basic_salary);
    printf("Aslam's gross salary is: %.0f Rs.\n", gross_salary = basic_salary + dearness_allowance + house_rent);

    return 0;
}
