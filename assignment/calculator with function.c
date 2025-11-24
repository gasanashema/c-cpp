#include <stdio.h>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divide(double a, double b) { return b == 0 ? 0 : a / b; }

int main() {
    double x, y;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &x, &y) != 2) return 1;
    printf("Add: %.6g\n", add(x,y));
    printf("Sub: %.6g\n", sub(x,y));
    printf("Mul: %.6g\n", mul(x,y));
    if (y != 0) printf("Div: %.6g\n", divide(x,y));
    else printf("Div: undefined (by zero)\n");
    return 0;
}
