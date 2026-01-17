#include<stdio.h>
int main()
{
    char n[1000001];
    fgets(n,1000001,stdin);
    for(int i=0; n[i] != '\\' ; i++)
    {
        printf("%c",n[i]);
    }
    return 0;
}