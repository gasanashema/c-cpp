#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0, amount;

    while(1) {
        printf("\n=== ATM MENU ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Current Balance: %.2f\n", balance);
        }
        else if(choice == 2) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("New Balance: %.2f\n", balance);
        }
        else if(choice == 3) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if(amount > balance) {
                printf("Insufficient balance\n");
            } else {
                balance -= amount;
                printf("New Balance: %.2f\n", balance);
            }
        }
        else if(choice == 4) {
            printf("Thank you for using the ATM\n");
            break;
        }
        else {
            printf("Invalid option\n");
        }
    }

    return 0;
}
