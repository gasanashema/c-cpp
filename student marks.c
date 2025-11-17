#include <stdio.h>

int main() {
    int n;
    float marks[100], total = 0;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    printf("Enter marks:\n");
    for(int i = 0; i < n; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", total / n);

    return 0;
}
