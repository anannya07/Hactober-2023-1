#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;

    // Find the proper divisors and calculate their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is perfect
    if (sum == num) {
        return 1; // The number is perfect
    } else {
        return 0; // The number is not perfect
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
