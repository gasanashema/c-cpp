#include <stdio.h>

int main() {
    int choice;
    double a, b, res;

    do {
        printf("\nMENU\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nChoose: ");
        if (scanf("%d", &choice) != 1) return 1;

        if (choice >=1 && choice <=4) {
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &a, &b) != 2) return 1;
        }

        switch (choice) {
            case 1: res = a + b; printf("Result: %.6g\n", res); break;
            case 2: res = a - b; printf("Result: %.6g\n", res); break;
            case 3: res = a * b; printf("Result: %.6g\n", res); break;
            case 4:
                if (b == 0) printf("Error: Division by zero\n");
                else { res = a / b; printf("Result: %.6g\n", res); }
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}
