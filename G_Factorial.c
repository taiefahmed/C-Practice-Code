#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);
        long long int a=1;
        for (int j=1; j <= num; j++)
        {
            a *= j;
        }
        printf("%lld \n", a); 
    }
    return 0;
