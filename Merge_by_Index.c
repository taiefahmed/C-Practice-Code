#include <stdio.h>
#include <string.h>

int main() {
    char n[2001], n1[1001];
    int s, e;

    scanf("%s %s", n, n1);
    scanf("%d %d", &s, &e);

    strncat(n, n1 + s, e - s + 1);

    printf("%s\n", n);
    return 0;
}
