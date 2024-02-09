#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of values must be greater than zero.\n");
        return 1;
    }

    double sum = 0.0;
    double product = 1.0;
    double reciprocal_sum = 0.0;
    double value;

    printf("Enter %d positive values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &value);
        if (value <= 0.0) {
            printf("Invalid input. All values must be positive.\n");
            return 1;
        }
        sum += value;
        product *= value;
        reciprocal_sum += 1.0 / value;
    }

    double arithmetic_mean = sum / n;
    double geometric_mean = pow(product, 1.0 / n);
    double harmonic_mean = n / reciprocal_sum;

    printf("Arithmetic Mean: %lf\n", arithmetic_mean);
    printf("Geometric Mean: %lf\n", geometric_mean);
    printf("Harmonic Mean: %lf\n", harmonic_mean);

    return 0;
}
