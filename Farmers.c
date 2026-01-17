#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mul,div,sub;
    for (int i = 0; i < n; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
         mul = m1 * d;
         div = mul /(m1+m2);
         sub =d-div;
        printf("%d\n", sub);
    }
    
    return 0;
}