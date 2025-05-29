#include <stdio.h>

struct stud {
    int roll;
    char name[25];
    int age;
    char add[25];
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct stud s[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d %s", &s[i].roll, s[i].name, &s[i].age, s[i].add);
    }

    int sroll;
    scanf("%d", &sroll);

    // Students aged 17
    for (int i = 0; i < n; i++) {
        if (s[i].age == 17) {
            printf("%s ", s[i].name);
        }
    }

    printf("\n");

    // Students with even roll numbers
    for (int i = 0; i < n; i++) {
        if (s[i].roll % 2 == 0) {
            printf("%s ", s[i].name);
        }
    }

    printf("\n");

    // Details of student with given roll number
    for (int i = 0; i < n; i++) {
        if (s[i].roll == sroll) {
            printf("%d %s %d %s\n", s[i].roll, s[i].name, s[i].age, s[i].add);
        }
    }

    return 0;
}
