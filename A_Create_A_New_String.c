#include<stdio.h>
#include<string.h>

int main()
{
     char c[1001] ,d[1001];
     scanf("%s",&c);
     scanf("%s",&d);
     int sz1=strlen(c);
     int sz2=strlen(d);
     printf("%d %d\n",sz1,sz2);
     printf("%s %s",c,d);
     return 0;
}