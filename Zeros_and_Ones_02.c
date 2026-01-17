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
    int a;
    scanf("%d", &a);
    arr[a] = 1 - arr[a];
    for (int i = 1; i <= n; i++)
        printf("%d ", arr[i]);
    return 0;
}