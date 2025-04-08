#include <stdio.h>

int main() {
    int amount, num_100, num_50, num_10;

    printf("Enter the amount to be withdrawn (in hundreds): ");
    scanf("%d", &amount);

    num_100 = amount;
    num_50 = 0;
    num_10 = 0;

    // Check if we need to give any 50 notes
    if (num_100 >= 5) {
        num_50 = num_100 / 5;
        num_100 = num_100 % 5;
    }

    // Check if we need to give any 10 notes
    if (num_100 >= 1) {
        num_10 = num_100;
    }

    printf("Number of 100 notes: %d\n", num_100);
    printf("Number of 50 notes: %d\n", num_50);
    printf("Number of 10 notes: %d\n", num_10);

    return 0;
}
