#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    int sub=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
        else{
            sub+=arr[i];
        }
    }
    printf("%d %d",sum,sub);

    return 0;
}