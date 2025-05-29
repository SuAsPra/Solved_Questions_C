// You are using GCC
#include <stdio.h>
#include <math.h>

int main() {
    struct complex {
        float real;
        float imag;
    };

    typedef struct complex com;
    com c1, c2;

    scanf("%f %f", &c1.real, &c1.imag);
    scanf("%f %f", &c2.real, &c2.imag);

    // Addition
    printf("%.2f + %.2fi\n", c1.real + c2.real, c1.imag + c2.imag);

    // Subtraction
    printf("%.2f + %.2fi\n", c1.real - c2.real, c1.imag - c2.imag);

    // Multiplication
    printf("%.2f + %.2fi\n",
           (c1.real * c2.real) - (c1.imag * c2.imag),
           (c1.real * c2.imag) + (c2.real * c1.imag));

    // Modulus of c1
    printf("%.2f\n", sqrt((c1.real * c1.real) + (c1.imag * c1.imag)));

    // Modulus of c2
    printf("%.2f\n", sqrt((c2.real * c2.real) + (c2.imag * c2.imag)));

    return 0;
}
