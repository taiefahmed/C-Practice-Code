#include<stdio.h>
void max(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>=arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d ",min);
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}
int main()
{
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     max(arr,n);
    return 0;
}