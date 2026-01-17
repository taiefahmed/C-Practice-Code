#include <stdio.h>
void rec(int n, int i)
{
    if (i == 0)
    {
        return;
    }
    printf("%d", i);
    if (i!=1)
        printf(" ");

    rec(n, i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = n;
    rec(n, i);
    return 0;
}