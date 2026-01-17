#include<stdio.h>
#include<string.h>
int main()
{
    char n[1000001];
    char m[1000001];
     scanf("%s",&n);
     scanf("%s",&m);

     int sz=strlen(n);

     for(int i=0;i<=sz;i++)
     {
       n[i]=m[i];
     }
     printf("%s %s",n, m);
    return 0;
}
