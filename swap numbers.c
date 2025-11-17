#include <stdio.h>
int main() {
    int a, b, t;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("Swapped: %d %d\n", a, b);
    return 0;
}
