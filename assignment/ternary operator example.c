#include <stdio.h>

int main(void) {
    int num, a, b, marks;
    printf("Enter an integer for even/odd check: ");
    if (scanf("%d", &num) != 1) return 1;
    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");

    printf("Enter two numbers to find max (a b): ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    int max = (a > b) ? a : b;
    printf("Max is %d\n", max);

    printf("Enter a number to categorize sign: ");
    if (scanf("%d", &num) != 1) return 1;
    const char *cat = (num > 0) ? "positive" : (num < 0) ? "negative" : "zero";
    printf("%d is %s\n", num, cat);

    printf("Enter marks (0-100) to find grade: ");
    if (scanf("%d", &marks) != 1) return 1;
    char grade = (marks >= 90) ? 'A' :
                 (marks >= 80) ? 'B' :
                 (marks >= 70) ? 'C' :
                 (marks >= 60) ? 'D' : 'F';
    printf("Grade: %c\n", grade);

    return 0;
}
