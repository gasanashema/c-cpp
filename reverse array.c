#include <stdio.h>
int main() {
    int n, a[100];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array values: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Reversed: ");
    for(int i = n - 1; i >= 0; i--) printf("%d ", a[i]);
    return 0;
}
