#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long ans = ((a % 100) * (b % 100)) % 100;
    ans = (ans * (c % 100)) % 100;
    ans = (ans * (d % 100)) % 100;

    printf("%02lld", ans);
    return 0;
}