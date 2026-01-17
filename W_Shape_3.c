#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int str = 1, spc = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= spc; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= str; j++)
        {
            printf("*");
        }
        printf("\n");
        str += 2;
        spc--;
    }
    str -= 2;
    spc++;
    for (int j = 1; j <= spc; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <= str; j++)
    {
        printf("*");
    }
    printf("\n");

    
    str -= 2;
    spc = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int i = 1; i <= spc; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= str; j++)
        {
            printf("*");
        }
        printf("\n");
        str -= 2;
        spc++;
    }

    return 0;
}