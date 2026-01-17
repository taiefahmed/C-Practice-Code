#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int  a, b, c;
        long long int  m;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long  mul = a * b * c;
        if (mul == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else{
                printf("-1\n");
            }
        }
        else if (m % mul == 0)
        {
            printf("%lld\n", m / mul);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}