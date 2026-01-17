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
    
    int flag = 1;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (arr[l] != arr[r])
        {
            flag = 0;
            break;
        }
        l++;
        r--;
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}