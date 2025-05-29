#include <stdio.h>

int main() {
    struct cricketer {
        char name[30];
        int age;
        int matches;
        float average;
    };

    int n;
    scanf("%d", &n);

    struct cricketer array[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %f", &array[i].name, &array[i].age, &array[i].matches, &array[i].average);
    }

    // Bubble Sort based on average
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j].average > array[j + 1].average) {
                struct cricketer temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d %d %.2f\n", array[i].name, array[i].age, array[i].matches, array[i].average);
    }

    return 0;
}
