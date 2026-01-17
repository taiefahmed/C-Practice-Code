#include <stdio.h>
int main()
{
    char c[1000001];
    scanf("%s", &c);
    int sum = 0;
    for (int i = 0; c[i]!='\0'; i++)
    {
        sum += c[i] - 48;
    }
    printf("%d", sum);
    return 0;
}