#include <stdio.h>

void pattern_i(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) printf("* ");
        printf("\n");
    }
}

void pattern_ii(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < (n - i) * 2; s++) printf(" ");
        int start = i;
        int mid = i + (i - 1);
        for (int j = 0; j < (2*i - 1); j++) {
            int val = start + (j <= (2*i-2)/2 ? j : (2*i-2 - j));
            printf("%d ", val);
        }
        printf("\n");
    }
}

void pattern_iii(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < (n - i); s++) printf("  ");
        for (int j = 0; j < (2*i - 1); j++) printf("* ");
        printf("\n");
    }
}

void pattern_iv(int n) {
    for (int i = n; i >= 1; i--) {
        for (int s = 0; s < (n - i); s++) printf("  ");
        for (int j = 0; j < (2*i - 1); j++) printf("* ");
        printf("\n");
    }
}

void pattern_v(int n) {
    for (int line = 0; line < n; line++) {
        for (int s = 0; s < n - line - 1; s++) printf("  ");
        int C = 1;
        for (int i = 0; i <= line; i++) {
            printf("%4d", C);
            C = C * (line - i) / (i + 1);
        }
        printf("\n");
    }
}

int main() {
    int choice, n;
    printf("Choose pattern (1-5): ");
    if (scanf("%d", &choice) != 1) return 1;
    printf("Enter size (e.g., 5): ");
    if (scanf("%d", &n) != 1) return 1;

    switch (choice) {
        case 1: pattern_i(n); break;
        case 2: pattern_ii(n); break;
        case 3: pattern_iii(n); break;
        case 4: pattern_iv(n); break;
        case 5: pattern_v(n); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
