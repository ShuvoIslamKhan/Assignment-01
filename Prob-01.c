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
    double values[n];

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i];
        product *= values[i];
        reciprocal_sum += 1.0 / values[i];
    }

    double arithmetic_mean = sum / n;
    double geometric_mean = pow(product, 1.0 / n);
    double harmonic_mean = n / reciprocal_sum;

    // Calculate the variance
    double variance = 0.0;
    for (int i = 0; i < n; i++) {
        variance += pow(values[i] - arithmetic_mean, 2);
    }
    variance /= n;

    printf("Arithmetic Mean: %lf\n", arithmetic_mean);
    printf("Geometric Mean: %lf\n", geometric_mean);
    printf("Harmonic Mean: %lf\n", harmonic_mean);
    printf("Variance: %lf\n", variance);

    return 0;
}

