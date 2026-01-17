#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i > 0; i++)
    {
        if (n / i)
        {
            if (n % i == 0)
            {
                int j = i;
                printf("%d\n", j);
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}