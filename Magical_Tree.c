#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int h = (n + 11) / 2;
    for (int i = 0; i < h; i++)
    {
        int str = 2 * i + 1;
        int Width = 2 * (h - 1) + 1;
        int spaces = (Width - str) / 2;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < str; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        int Width = 2 * (h - 1) + 1;
        int spaces = (Width - n) / 2;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}