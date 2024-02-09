#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. n must be a positive integer.\n");
        return 1;
    }

    int evenNumber = 2 * n; // Calculate the n-th even number

    printf("The %d-th even number is: %d\n", n, evenNumber);

    return 0;
}