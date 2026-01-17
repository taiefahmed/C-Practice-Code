#include <stdio.h>
int main()
{
    char n[1001];
    scanf("%s", n);
    int sz = strlen(n);

    int f = 1;
    int l = 0;
    int r = sz - 1;
    while (l < r)
    {
        if (n[l] != n[r])
        {
            f = 0;
            break;
        }
        l++;
        r--;
    }
    if (f == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}