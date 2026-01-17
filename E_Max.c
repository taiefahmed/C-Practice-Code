#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int b;
        scanf("%d", &b);
        if (max < b)
        {
            max = b;
        }
    }
    printf("%d", max);
    return 0;
}