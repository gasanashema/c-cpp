#include <stdio.h>
#include <ctype.h>
int main() {
    char s[100];
    int count = 0;
    printf("Enter a word: ");
    scanf("%s", s);
    for(int i = 0; s[i]; i++) {
        char c = tolower(s[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count++;
    }
    printf("Vowels: %d\n", count);
    return 0;
}
