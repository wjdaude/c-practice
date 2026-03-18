#include <stdio.h>

typedef struct {
    char name[20];
    int score;
} Student;

double calcAverage(Student students[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].score;
    }
    return (double)sum / n;
}

int main() {
    int n;
    scanf("%d", &n);

    Student students[50];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", students[i].name, &students[i].score);
    }

    double avg = calcAverage(students, n);

    printf("Avg: %.2f\n", avg);
    printf("Above Avg:\n");

    for (int i = 0; i < n; i++) {
        if (students[i].score >= avg) {
            printf("%s %d\n", students[i].name, students[i].score);
        }
    }

    return 0;
}