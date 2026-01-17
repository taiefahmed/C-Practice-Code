#include <stdio.h>
void rec(int n)
{
    if (n == 0)
    {
        return;
    }
    rec(n / 10);
    int l = n % 10;
    printf("%d ", l);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if(x==0)
        {
            printf("0");
        }
        rec(x);
        printf("\n");
    }
    return 0;
}