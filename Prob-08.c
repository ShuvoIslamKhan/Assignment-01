#include <stdio.h>

int main() {
    int n, oddnum[100];
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. n must be a positive integer.\n");
        return 1;
    }
    printf("Enter the values:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &oddnum[i]);
    }

    printf("First %d odd numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", oddnum[i]);
    }
    printf("\n");

    return 0;
}
