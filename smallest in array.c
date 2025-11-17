#include <stdio.h>
int main() {
    int n, a[100], min;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter values: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    min = a[0];
    for(int i=1;i<n;i++) if(a[i] < min) min = a[i];
    printf("Smallest: %d\n", min);
    return 0;
}
