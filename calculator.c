#include <stdio.h>
int main() {
    double a, b;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    printf("Choose operator (+ - * /): ");
    scanf(" %c", &op);
    if(op == '+') printf("Result: %lf\n", a + b);
    else if(op == '-') printf("Result: %lf\n", a - b);
    else if(op == '*') printf("Result: %lf\n", a * b);
    else if(op == '/') printf("Result: %lf\n", a / b);
    else printf("Invalid operator\n");
    return 0;
}
