#include <stdio.h>

void iseven(int);
void ismultiple(int);

int main() {
    int x;
    scanf("%d", &x);
    iseven(x);
    return 0;
}

void iseven(int x) {
    if (x % 2 == 0) {
        printf("Even\n");
        ismultiple(x);  // Corrected: added semicolon
    } else {
        printf("Not even\n");
    }
}

void ismultiple(int x) {
    if (x % 10 == 0) {
        printf("Multiple of 10\n");
    } else {
        printf("Not a multiple of 10\n");
    }
}
