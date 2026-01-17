#include<stdio.h>

void recursion(int n,int i)
{
    if(i==n)
    {
        return;
    }
    printf("I love Recursion\n");
    recursion(n,i+1);
}

int main()
{
     int n;
    scanf("%d",&n);
    recursion(n,0);
    return 0;
}