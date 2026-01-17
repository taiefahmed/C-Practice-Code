#include <stdio.h>
#include <string.h>
int main()
{
  char n[10001];
  scanf("%s", &n);
  int sz = strlen(n);
  int count[30] = {0};
  for (int i = 0; i < sz; i++)
  {
    int c = n[i] - 'a';
    count[c]++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (count[i] > 0)
    {
      char c = 'a' + i;
      printf("%c - %d\n", c, count[i]);
    }
  }
  return 0;
}
