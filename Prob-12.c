#include <stdio.h>

int main() {
    int n, num = 1;

    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. The number of rows must be a positive integer.\n");
        return 1;
    }

    printf("Floyd's Triangle:\n");

    for (int i = 1; i <= n; i++) {
        for(int space=1; space <= n-i; space++)
        printf(" ");
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
