#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     for(int i=n;1<=i;i--)
     {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
     }
    return 0;
}