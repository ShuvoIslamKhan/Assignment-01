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
    printf("Factorials of the first five consecutive numbers:\n");
    for (int i = 1; i <= 5; i++) {
        unsigned long long fact = factorial(i);
        printf("%d! = %llu\n", i, fact);
    }

    return 0;
}
