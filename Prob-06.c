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

    double values[n];
    double sum = 0.0;

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    double mean = sum / n;
    double sum_of_squared_differences = 0.0;

    for (int i = 0; i < n; i++) {
        sum_of_squared_differences += pow(values[i] - mean, 2);
    }

    double variance = sum_of_squared_differences / n;
    double std_deviation = sqrt(variance);

    printf("Mean: %lf\n", mean);
    printf("Standard Deviation: %lf\n", std_deviation);

    return 0;
}
