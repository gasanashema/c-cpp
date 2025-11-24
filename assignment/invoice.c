#include <stdio.h>

int main() {
    char item[100];
    double price;
    int qty;

    printf("Item name: ");
    getchar();
    fgets(item, sizeof(item), stdin);

    size_t len = 0;
    while (item[len]) len++;
    if (len && item[len-1] == '\n') item[len-1] = '\0';

    printf("Price (per unit): ");
    if (scanf("%lf", &price) != 1) return 1;
    printf("Quantity: ");
    if (scanf("%d", &qty) != 1) return 1;

    double subtotal = price * qty;
    double tax = subtotal * 0.18; 
    double total = subtotal + tax;

    printf("\n-----------------------------\n");
    printf("           INVOICE\n");
    printf("-----------------------------\n");
    printf("%-20s %6s %8s %10s\n", "Item", "Price", "Qty", "Amount");
    printf("-----------------------------\n");
    printf("%-20s %6.2f %8d %10.2f\n", item, price, qty, subtotal);
    printf("-----------------------------\n");
    printf("%-36s %10.2f\n", "Tax (18%):", tax);
    printf("%-36s %10.2f\n", "TOTAL:", total);
    printf("-----------------------------\n");
    return 0;
}
