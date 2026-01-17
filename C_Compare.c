#include <stdio.h>
#include <string.h>
int main()
{
    char c[21], d[21];
    scanf("%s", &c);
    scanf("%s", &d);
    char z = strcmp(c, d);
    if (z == -1)
    {
        printf("%s", c);
    }
    else if (z == +1)
    {
        printf("%s", d);
    }
    else
    {
        printf("%s", c);
    }
    return 0;
}