#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter upper limit (n): ");
    if (scanf("%d", &n) != 1) return 1;
    if (n < 2) { printf("No primes <= %d\n", n); return 0; }

    printf("Primes from 1 to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        int limit = (int)sqrt((double)i);
        for (int d = 2; d <= limit; d++) {
            if (i % d == 0) { isPrime = false; break; }
        }
        if (isPrime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
