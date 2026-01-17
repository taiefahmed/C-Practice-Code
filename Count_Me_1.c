#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
        else if (arr[i] % 3 == 0)
        {
            count2++;
        }
    }
    printf("%d %d", count, count2);
    return 0;
}
