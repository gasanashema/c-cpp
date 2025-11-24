#include <stdio.h>

int main(void) {
    int op;
    double x, y;
    printf("Choose operation:\n1.+ 2.- 3.* 4./\nChoice: ");
    if (scanf("%d", &op) != 1) return 1;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &x, &y) != 2) return 1;

    switch (op) {
        case 1: printf("Result: %.6g\n", x+y); break;
        case 2: printf("Result: %.6g\n", x-y); break;
        case 3: printf("Result: %.6g\n", x*y); break;
        case 4:
            if (y == 0) printf("Error: division by zero\n");
            else printf("Result: %.6g\n", x/y);
            break;
        default: printf("Invalid operation\n");
    }
    return 0;
}
