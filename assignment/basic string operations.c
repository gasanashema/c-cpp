#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[5][50];
    int n = 3;
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(arr[i], sizeof(arr[i]), stdin);
        size_t len = strlen(arr[i]);
        if (len && arr[i][len-1] == '\n') arr[i][len-1] = '\0';
    }

    puts("Stored strings:");
    for (int i = 0; i < n; i++) puts(arr[i]);

    char buffer[200];
    strcpy(buffer, arr[0]);
    strcat(buffer, " ");
    strcat(buffer, arr[1]);
    printf("\nConcatenated: %s\n", buffer);

    int cmp = strcmp(arr[0], arr[1]);
    printf("Comparison arr[0] vs arr[1]: %d\n", cmp);

    printf("Length of first string: %zu\n", strlen(arr[0]));

    return 0;
}
