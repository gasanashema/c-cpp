#include <stdio.h>
int main() {
    int i = 1;
    printf("Incrementing:\n");
    do {
        printf("%d ", i);
        i++;  // increment
    } while(i <= 5);

    int j = 5;
    printf("\nDecrementing:\n");
    do {
        printf("%d ", j);
        j--;  // decrement
    } while(j >= 1);

    return 0;
}
