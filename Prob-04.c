#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of values must be greater than zero.\n");
        return 1;
    }

    double reciprocal_sum = 0.0;
    double value;

    printf("Enter %d positive values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &value);
        if (value <= 0.0) {
            printf("Invalid input. All values must be positive.\n");
            return 1;
        }
        reciprocal_sum += 1.0 / value;
    }

    double harmonic_mean = n / reciprocal_sum;

    printf("Harmonic Mean: %lf\n", harmonic_mean);

    return 0;
}
