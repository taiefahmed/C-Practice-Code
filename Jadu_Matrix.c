#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (n == m)
    {
        int flag = 100;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j || i + j == n - 1)
                {
                    if (arr[i][j] != 1)
                    {
                        flag = 200;
                    }
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        flag = 200;
                    }
                }
            }
        }
        if (flag == 100)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}