#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if (n >= 0 && n <= 25)
    {
        printf("Interval [0,25]");
    }
    else if (25 <= n && 50 >= n)
    {
        printf("Interval (25,50]");
    }
    else if (50 <= n && 75 >= n)
    {
        printf("Interval (50,75]");
    }
    else if (75 <= n && 100 >= n)
    {
        printf("Interval (75,100]");
    }
    else {
        printf("Out of Intervals");
    }
    return 0;
}