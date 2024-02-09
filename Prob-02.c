#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of values must be greater than zero.\n");
        return 1;
    }

    double sum = 0.0;
    double value;

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &value);
        sum += value;
    }

    double arithmetic_mean = sum / n;

    printf("Arithmetic Mean: %lf\n", arithmetic_mean);

    return 0;
}

