#include <stdio.h>

int main()
{
    int a, b, c;
    char o, e;

    scanf("%d %c %d %c %d", &a, &o, &b, &e, &c);

    if (o == '+')
    {
        int sum = a + b;
        if (a + b == c)
            printf("Yes\n");
        else
            printf("%d", sum);
    }
    else if (o == '-')
    {
        int sub = a - b;
        if (a - b == c)
            printf("Yes\n");
        else
            printf("%d", sub);
    }
    else if (o == '*')
    {
        int mult = a * b;
        if (a * b == c)
            printf("Yes\n");
        else
            printf("%d", mult);
    }
    return 0;
}
