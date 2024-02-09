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

    double product = 1.0;
    double value;

    printf("Enter %d positive values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &value);
        if (value <= 0.0) {
            printf("Invalid input. All values must be positive.\n");
            return 1;
        }
        product *= value;
    }

    double geometric_mean = pow(product, 1.0 / n);

    printf("Geometric Mean: %lf\n", geometric_mean);

    return 0;
}
