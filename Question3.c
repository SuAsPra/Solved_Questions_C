//Question 3
#include <stdio.h>
#include <stdbool.h>

int isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return true;
}

int Fibonacci(int n) {
    if ((n == 1) || (n == 2)) {
        return 1;
    }
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int nthPrime(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            count++;
        }
        num++;
    }
    return num - 1;
}

int main() {
    int n, result;
    scanf("%d", &n);
    if (n == 1) {
        printf("1");
        return 0;
    }
    if (n % 2 == 1) {
        result = Fibonacci((n + 1) / 2);
        printf("%d", result);
    } else {
        result = nthPrime(n / 2);
        printf("%d", result);
    }
    return 0;
}
//Alternate answer
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 1) {
        int i, t1 = 0, t2 = 1, nextTerm;
        for (i = 1; i <= n / 2 + 1; i++) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("%d", t1);
    } else {
        int i, j, flag, count = 0;
        int max = 1000;
        for (i = 2; i <= max; i++) {
            flag = 0;
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                count++;
                if (count == n / 2) {
                    printf("%d", i);
                    break;
                }
            }
        }
    }

    return 0;
}
