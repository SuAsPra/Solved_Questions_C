#include <stdio.h>

union ComplexNumber {
    struct {
        double r, i;  // r = real part, i = imaginary part
    } part;
};

int main() {
    union ComplexNumber n1, n2, sum;

    // Input first complex number
    scanf("%lf %lf", &n1.part.r, &n1.part.i);

    // Input second complex number
    scanf("%lf %lf", &n2.part.r, &n2.part.i);

    // Add real and imaginary parts separately
    sum.part.r = n1.part.r + n2.part.r;
    sum.part.i = n1.part.i + n2.part.i;

    // Print result
    printf("%.2lf + %.2lfi\n", sum.part.r, sum.part.i);

    return 0;
}
