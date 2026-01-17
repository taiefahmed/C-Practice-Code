#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int num = 1, spc = n - 1;
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= spc; j++)
      {
         printf(" ");
      }
      for (int j = 1; j <= num; j++)
      {
         if (i % 2 == 0)
         {
            printf("-");
         }
         else
         {
            printf("#");
         }
      }
      printf("\n");
      num += 2;
      spc--;
   }

   num = 2 * n - 3;
   spc = 1;
   for (int i = n - 1; i >= 1; i--)
   {
      for (int j = 1; j <= spc; j++)
      {
         printf(" ");
      }
      for (int j = 1; j <= num; j++)
      {
         if (i % 2 == 0)
         {
            printf("-");
         }
         else
         {
            printf("#");
         }
      }
      printf("\n");
      num -= 2;
      spc++;
   }

   return 0;
}