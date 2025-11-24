#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("How many students (max 50)? ");
    if (scanf("%d", &n) != 1) return 1;
    if (n <= 0 || n > 50) { printf("Invalid number\n"); return 1; }

    char names[50][100];
    double grades[50];

    for (int i = 0; i < n; i++) {
        printf("Student %d name: ", i+1);
        getchar(); 
        fgets(names[i], sizeof(names[i]), stdin);
        size_t len = strlen(names[i]);
        if (len && names[i][len-1] == '\n') names[i][len-1] = '\0';

        printf("Grade for %s: ", names[i]);
        if (scanf("%lf", &grades[i]) != 1) return 1;
    }

    double sum = 0;
    double max = grades[0], min = grades[0];
    int maxi = 0, mini = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
        if (grades[i] > max) { max = grades[i]; maxi = i; }
        if (grades[i] < min) { min = grades[i]; mini = i; }
    }
    double avg = sum / n;

    printf("\nStudents and grades:\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s : %.2f\n", names[i], grades[i]);
    }
    printf("Average: %.2f\n", avg);
    printf("Highest: %s with %.2f\n", names[maxi], max);
    printf("Lowest : %s with %.2f\n", names[mini], min);

    return 0;
}
