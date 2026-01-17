#include<stdio.h>

void odd_even()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
        }
        else if(arr[i]%2!=0)
        {
            b++;
        }
    }
    printf("%d %d",c,b);
}

int main()
{
    odd_even();
    return 0;
}