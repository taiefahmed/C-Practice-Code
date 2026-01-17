#include <stdio.h>
void vowel(char s[], int i)
{
    if (s[0] == '\0')
    {
        return 0;
    }
    int vwl = 0;
    if ((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z'))
    {
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' ||
            s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
        {
            vwl++;
        }
    }
    vowel(s, i + 1);
    return vwl + 1;
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int c = vowel(s, 0);
    printf("%d", c);
    return 0;
}