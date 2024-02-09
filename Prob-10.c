#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. n must be a positive integer.\n");
        return 1;
    }

    int oddNumber = 2 * n - 1; // Calculate the n-th odd number

    printf("The %d-th odd number is: %d\n", n, oddNumber);

    return 0;
}
