#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int v, idx;
    scanf("%d %d", &idx ,&v);

    // main kaj atai
    for (int i = n; i>=idx+1; i--)
    {
        arr[i] = arr[i - 1];
    }


    arr[idx]=v;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}