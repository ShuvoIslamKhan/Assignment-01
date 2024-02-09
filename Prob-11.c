#include <stdio.h>

long long binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

int main() {
    int numRows;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &numRows);

    if (numRows <= 0) {
        printf("Invalid input. The number of rows must be a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < numRows; i++) {
        for(int space=1; space <= numRows-i; space++)
        printf(" ");
        for (int j = 0; j <= i; j++) {
            printf("%lld ", binomialCoefficient(i, j));
        }
        printf("\n");
    }

    return 0;
}