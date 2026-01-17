#include<stdio.h>
#include<string.h>
int main()
{
    int n[1000001];
    scanf("%s",&n);
    int sum=0;
    int sz=strlen(n);
    for(int i=0; i<sz ; i++)
    {
       sum+=n[i]-48;
    }
    printf("%d",sum);
    return 0;
}








