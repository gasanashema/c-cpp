#include <stdio.h>

int main() {
    int limit;
    printf("Enter limit (generate tables from 1 to limit): ");
    if (scanf("%d", &limit) != 1) return 1;

    for (int n = 1; n <= limit; n++) {
        printf("\nTable for %d:\n", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %2d = %d\n", n, i, n * i);
        }
    }
    return 0;
}
