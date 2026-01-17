#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char dig;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &dig);
        sum += dig - '0';
    }
    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
