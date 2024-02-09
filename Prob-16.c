#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If num is divisible by any number between 2 and sqrt(num), it's not prime.
        }
    }

    return true; // If no divisors were found, the number is prime.
}

int main() {
    int n;

    printf("Enter the number of prime numbers to print: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. The number of prime numbers must be a positive integer.\n");
        return 1;
    }

    int primeCount = 0;
    int num = 2; // Start with the first prime number

    printf("The first %d prime numbers are:\n", n);
    while (primeCount < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            primeCount++;
        }
        num++;
    }

    printf("\n");

    return 0;
}
