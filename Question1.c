//Question 1
#include <stdio.h>

int main(void)
{
    int i, n, j;
    static int k = 2;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%10.5d", (k * (2 * k - 1)));
            k = k + 2;
        }
        printf("\n");
    }
    return 0;
}

//Own Answer
#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    int start = 00006;
    int difference = 16;
    if (i == 1) {
        printf("%10.5d", start);
    }
    int shum = 0;
    for (int k = 1; k <= i; k++) {
        shum = shum + k;
    }

    int p = 1;
    int arr[shum];
    int a = 0;
    for (int k = 1; k <= shum; k++) {
        arr[k - 1] = p;
        p = p + k + 1;
    }

    for (int j = 1; j <= shum; j++) {
        printf("%10.5d", start);
        start = start + (difference * j) + 6;
        int c = 0;
        for (int k = 1; k <= shum; k++) {
            if (arr[k - 1] == j) {
                c = c + 1;
            }
        }
        if (c != 0) {
            printf("\n");
        }
    }
}

