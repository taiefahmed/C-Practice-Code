#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int r=n%10;
     int d=n/10;
     if(r%d==0||d%r==0 |)
     {
        printf("YES");
     }
     else {
        printf("NO");
     }
    return 0;
}