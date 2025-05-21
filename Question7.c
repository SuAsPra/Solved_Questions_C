#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int matrix[100][100];

        // Input the matrix
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // Initialize sums for each quadrant
        int sumTL = 0, sumTR = 0, sumBL = 0, sumBR = 0;
        int mid = N / 2;

        // Calculate sums for top-left and top-right quadrants
        for (int i = 0; i < mid; i++) {
            for (int j = 0; j < mid; j++) {
                sumTL += matrix[i][j];         // Top-left quadrant
                sumTR += matrix[i][j + mid];   // Top-right quadrant
            }
        }

        // Calculate sums for bottom-left and bottom-right quadrants
        for (int i = mid; i < N; i++) {
            for (int j = 0; j < mid; j++) {
                sumBL += matrix[i][j];         // Bottom-left quadrant
                sumBR += matrix[i][j + mid];   // Bottom-right quadrant
            }
        }

        // Output the sums for the four quadrants
        printf("%d %d %d %d\n", sumTL, sumTR, sumBL, sumBR);
    }

    return 0;
}
