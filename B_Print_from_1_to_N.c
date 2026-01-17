#include<stdio.h>
void rec(int n,int i)
{
    if (i==n+1)
    {
        return;
    }
    printf("%d\n",i);
    rec(n,i+1);
}
int main()
{

     int n;
     scanf("%d",&n);

     rec(n,1);
    return 0;

}