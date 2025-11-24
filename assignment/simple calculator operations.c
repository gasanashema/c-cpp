#include <stdio.h>

int main() {
    double x, y;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &x, &y) != 2) return 1;
    printf("Add: %.6g\n", x + y);
    printf("Sub: %.6g\n", x - y);
    printf("Mul: %.6g\n", x * y);
    if (y != 0) printf("Div: %.6g\n", x / y);
    else printf("Div: undefined (division by zero)\n");

    printf("x == y? %s\n", (x == y) ? "true" : "false");
    printf("x > y? %s\n", (x > y) ? "true" : "false");

    printf("Is x>0 and y>0? %s\n", (x > 0 && y > 0) ? "true" : "false");

    return 0;
}
