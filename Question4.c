//Question 4
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define ll long long

ll scan() {
    register ll v1 = 0;
    char c;
    bool ng = 0;
    c = getchar_unlocked();
    if (c == '-') ng = 1;
    while (c < '0' || c > '9') c = getchar_unlocked();
    while (c >= '0' && c <= '9') {
        v1 = (v1 << 3) + (v1 << 1) + c - '0';
        c = getchar_unlocked();
    }
    if (ng) v1 = -v1;
    return v1;
}

ll fun(ll n) {
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n |= n >> 32;
    ++n;
    return n >> 1;
}

int main() {
    ll ans, n;
    int t = scan();
    while (t--) {
        n = scan();
        printf("%lld\n", n & (n - 1) ? ((n ^ fun(n)) << 1) : n);
    }
    return 0;
}
