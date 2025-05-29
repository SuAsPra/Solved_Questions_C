#include <stdio.h>
#define E 2.71828
#include <math.h>

int Growth(double *, double *, double *);

int main() {
    double n, m, t;
    scanf("%lf %lf %lf", &n, &m, &t);
    Growth(&n, &m, &t);
}

int Growth(double *n, double *m, double *t) {
    double pop;
    double *popp = &pop;

    *popp = (*n) * pow(E, (*m) * (*t));

    printf("%.21f", *popp);
    return 0;
}
