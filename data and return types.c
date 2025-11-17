#include <stdio.h>

// return type: int
int add(int a, int b) { // data types: int a, int b
    return a + b;       // returns int
}

int main() {
    int result = add(5, 3); // result is int
    printf("Sum = %d", result);
    return 0;
}
