#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    printf("Enter a word: ");
    scanf("%s", s);
    int n = strlen(s);
    printf("Reversed: ");
    for(int i = n - 1; i >= 0; i--) printf("%c", s[i]);
    printf("\n");
    return 0;
}
