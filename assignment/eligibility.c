#include <stdio.h>

int main() {
    int age;
    int hasLicenseTest;
    printf("Enter age: ");
    if (scanf("%d", &age) != 1) return 1;

    printf("Have you passed driving test? (1=yes, 0=no): ");
    if (scanf("%d", &hasLicenseTest) != 1) return 1;

    if (age >= 18) printf("Eligible to vote.\n");
    else printf("Not eligible to vote.\n");

    if (age >= 18 && hasLicenseTest) printf("Eligible to obtain/hold a driver's license.\n");
    else if (age >= 18 && !hasLicenseTest) printf("Age ok for driving, but must pass driving test.\n");
    else printf("Not eligible to drive due to age.\n");

    return 0;
}
