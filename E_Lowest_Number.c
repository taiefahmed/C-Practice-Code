#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = arr[1];
    int idx = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
            idx = i;
        }
    }
    printf("%d %d", m, idx);
    return 0;
}