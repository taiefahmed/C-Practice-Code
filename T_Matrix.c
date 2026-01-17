#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            if (i + j == n - 1)
            {
                add += arr[i][j];
            }
        }
    }
    int x =abs(sum-add);
    printf("%d", x);
    return 0;
}