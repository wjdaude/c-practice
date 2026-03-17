#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int scores[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int sum = 0;
    int max = scores[0];  
    int min = scores[0];  

    for (int i = 0; i < n; i++) {
        sum += scores[i];
        if (scores[i] > max) max = scores[i];
        if (scores[i] < min) min = scores[i];
    }

    double avg = (double)sum / n;

    printf("Students: %d Total: %d Average: %.2f (High: %d, Low: %d)\n",
           n, sum, avg, max, min);

    return 0;
}