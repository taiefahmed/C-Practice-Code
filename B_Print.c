#include <stdio.h>

void print(int n)
{

    int i = 1;
    while (i <= n)
    {
        printf("%d", i);
        i++;
        if (i != n+1)
            printf(" ");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}