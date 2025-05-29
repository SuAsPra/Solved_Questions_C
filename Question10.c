#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int *ptr = &n;
    int max = 0;
    int min = 9;
    int *pmax = &max;
    int *pmin = &min;
    int *premain = 0;

    if (n > 1000) {
        while (n != 0) {
            int remain = n % 10;
            premain = &remain;

            if (*premain > *pmax) {
                *pmax = *premain;
            } else if (*premain < *pmin) {
                *pmin = *premain;
            }

            n = n / 10;
        }

        printf("%d", *pmax + *pmin);
    } else {
        printf("Invalid input");
    }

    return 0;
}
