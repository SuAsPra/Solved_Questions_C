//Question6.c
#include <stdio.h>

int main() {
    int n = 3;
    int arr[3][3];

    // Taking input for 3x3 matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculating sum of each row
    for (int i = 0; i < n; i++) {
        int shum = 0;
        for (int j = 0; j < n; j++) {
            shum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i, shum);
    }

    return 0;
}
