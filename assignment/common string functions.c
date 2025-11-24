#include <stdio.h>

size_t my_strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return (size_t)(p - s);
}

char *my_strcat(char *dest, const char *src) {
    char *d = dest;
    while (*d) d++;
    while ((*d++ = *src++));
    return dest;
}

int my_strcmp(const char *a, const char *b) {
    while (*a && (*a == *b)) { a++; b++; }
    return (unsigned char)*a - (unsigned char)*b;
}

int main() {
    char a[200] = "Hello";
    char b[] = " World";
    printf("len(a) = %zu\n", my_strlen(a));
    my_strcat(a, b);
    printf("After concat: %s\n", a);
    printf("Compare a and b: %d\n", my_strcmp(a, b));
    return 0;
}
