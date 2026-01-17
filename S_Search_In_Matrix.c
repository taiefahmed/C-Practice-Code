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
    int x;
    scanf("%d",&x);
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if(arr[i][j]==x)
           {
             flag++;
           }
          
        }
    }
    if(flag==0)
    {
        printf("will take number");
    }
    else{
        printf("will not take number");
    }
    return 0;
}