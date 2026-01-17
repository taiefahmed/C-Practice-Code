#include <stdio.h>
int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d ", &arr[i][j]);
    }
  }
  int flag = 100;
  if (n == m)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (i == j)
        {
        }
        else
        {
          if (arr[i][j] != 0)
          {
            flag = 200;
            printf("this is not primary diagonal\n");
          }
        }
      }
    }
    if (flag == 100)
    {
      printf("this is a primary diagonal\n");
    }
  }
  else
  {
    printf("this is not diagonal matrix \n");
  }

  return 0;
}