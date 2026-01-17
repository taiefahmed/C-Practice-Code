#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);

      int spc=n-1;
     for(int i=1;i<=n;i++)
     {
        for(int i=1;i<=spc;i++)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
        spc--;
     }
    return 0;
}