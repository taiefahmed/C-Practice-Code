#include <stdio.h>
int main()
{
    int n;
    int a;
    scanf("%d", &n);
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;
    for (int i = 1; i <= n; i++)
    {

        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
        else if (a % 2 != 0)
        {
            odd++;
        }
        if (a < 0)
        {
            neg++;
        }
        else if (a > 0)
        {
            pos++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}