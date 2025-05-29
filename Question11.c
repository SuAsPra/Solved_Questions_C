#include <stdio.h>

int main() {
    int r, c, h;
    scanf("%d %d %d", &r, &c, &h);

    if ((r != 3) || (c != 3) || (h != 3)) {
        printf("Error");
        return 0;
    }

    int arr[r][c][h];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < h; k++) {
                scanf("%d", (*(* (arr + i) + j) + k));
            }
        }
    }

    int sum = 0;
    int *ptr = &sum;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < h; k++) {
                if ((i == j) && (i == k)) {
                    *ptr = *ptr + *(*(*(arr + i) + j) + k);
                }
            }
        }
    }

    printf("%d", *ptr);
    return 0;
}
