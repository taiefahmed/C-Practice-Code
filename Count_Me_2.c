#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", &s);
    int sz = strlen(s);
    int count =0;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || 
            s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    int s1=sz-count;
    printf("%d", s1);
    return 0;
}