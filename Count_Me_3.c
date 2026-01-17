#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   for (int i = 1; i <=n; i++)
   {
      char s[10001];
      scanf("%s", &s);
      int sz=strlen(s);
      int c1 = 0, c2 = 0, c3 = 0;
      for (int i = 0; i<=sz; i++)
      {
         if ('A' <= s[i] && s[i] <='Z')
         {
            c1++;
         }
         else if ('a' <= s[i] && s[i] <= 'z')
         {
            c2++;
         }
         else if ('0' <= s[i] && s[i] <= '9')
         {
            c3++;
         }
      }
      printf("%d %d %d\n",c1,c2,c3);
   }
   return 0;
}