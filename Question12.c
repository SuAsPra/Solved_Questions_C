#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int arr2[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", arr2 + i);
    }

    for (int i = 0; i < n; i++) {
        if (*(arr2 + i)) {
            printf("%d ", *(arr + i) * -1);
        } else {
            printf("%d ", *(arr + i));
        }
    }

    return 0;
}
