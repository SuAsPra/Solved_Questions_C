//Question2
#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    int p = 2 * i;
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < i; k++) {
            if (k + 1 <= j + 1) {
                printf("%d", k + 1);
            } else {
                printf(" ");
            }
        }

        int c = j;
        for (int r = i; r > 0; r--) {
            if (r > j + 1) {
                printf(" ");
            } else {
                printf("%d", c + 1);
                c = c - 1;
            }
        }

        printf("\n");
    }

    return 0;
}
//Alternative solution
#include <stdio.h>

int main() {
    int n, x, y;
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        for (y = 1; y <= n; y++) {
            if (y <= x)
                printf("%d", y);
            else
                printf(" ");
        }

        for (y = n; y >= 1; y--) {
            if (y <= x)
                printf("%d", y);
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

