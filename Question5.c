//Question 5

#include <stdio.h>

int main() {
    int arr[10];
    
    // Taking input
    for (int i = 0; i <= 9; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking if all elements are the same
    int condition = 0;
    for (int i = 0; i < 9; i++) {
        if (arr[i] != arr[i + 1]) {
            condition = 1;
            break;
        }
    }

    if (condition == 0) {
        printf("All elements are the same\n");
    } else {
        // Sorting using bubble sort
        for (int i = 0; i <= 9; i++) {
            for (int j = 0; j < 9 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        printf("Arranged elements are: ");
        for (int i = 0; i <= 9; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
