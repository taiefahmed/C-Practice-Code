#include <stdio.h>
int main()
{
    char c;
    int i = 97;
    int j = 121;
    scanf("%c", &c);
    if (c >= i && c <= j)
    {
        c += 1;
        printf("%c", c);
    }
    else
    {
        printf("a");
    }

    return 0;
}