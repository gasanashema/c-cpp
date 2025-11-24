#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    printf("Multiplication table for %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %2d = %d\n", n, i, n * i);
    }
    return 0;
}
