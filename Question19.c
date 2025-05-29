#include <stdio.h>
#include <string.h>

struct Patient {
    int id;
    char name[50];
    int g;      // 1 = male, else female
    int age;
};

// Function to count male and female patients
void pg(struct Patient p[], int n) {
    int mc = 0, fc = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].g == 1)
            mc++;
        else
            fc++;
    }
    printf("Count: %d %d\n", mc, fc);
}

// Function to print names of patients above 40
void pa(struct Patient p[], int n) {
    int f = 0;
    printf("Above 40:");
    for (int i = 0; i < n; i++) {
        if (p[i].age > 40) {
            printf(" %s", p[i].name);
            f = 1;
        }
    }
    if (!f) {
        printf(" 0");
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    struct Patient p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d %d", &p[i].id, p[i].name, &p[i].g, &p[i].age);
    }

    pg(p, n);
    pa(p, n);

    return 0;
}
