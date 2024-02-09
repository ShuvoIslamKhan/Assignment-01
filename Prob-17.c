#include <stdio.h>

unsigned long long factorial(int num) {
    if (num < 0) {
        // Factorial is not defined for negative numbers
        return 0;
    }

    unsigned long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    unsigned long long fact = factorial(n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", n, fact);
    }

    return 0;
}
