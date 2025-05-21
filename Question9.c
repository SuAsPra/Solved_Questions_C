//Question 9
#include <stdio.h>
#include <string.h>

void Roman(int num, char *result) {
    const char *roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    const int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    
    result[0] = '\0';  // Proper string initialization

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(result, roman[i]);
            num -= values[i];
        }
    }
}

int main() {
    int num;
    char result[50];

    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid\n");
        return 0;
    }

    Roman(num, result);
    printf("%s\n", result);

    return 0;
}
