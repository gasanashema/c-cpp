#include <stdio.h>
int main() {
    int n;
    float x, sum = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++) {
        scanf("%f", &x);
        sum += x;
    }
    printf("Average: %f\n", sum / n);
    return 0;
}
