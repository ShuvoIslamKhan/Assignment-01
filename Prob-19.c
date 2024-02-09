#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. The number of terms must be a positive integer.\n");
        return 1;
    }

    unsigned long long fib[n];
    fib[0] = 0; // First Fibonacci number
    fib[1] = 1; // Second Fibonacci number

    printf("Fibonacci Sequence:\n");
    printf("%llu ", fib[0]);
    if (n > 1) {
        printf("%llu ", fib[1]);
    }

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%llu ", fib[i]);
    }

    printf("\n");

    return 0;
}
