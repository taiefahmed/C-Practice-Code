#include<stdio.h>
int main()
{
     long long int n;
     scanf("%lld",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
        scanf("%lld",&arr[i]);
     }
     long long int sum=0;
      for(int i=0;i<n;i++)
     {
       sum+=arr[i];
     }
    long long int a= llabs(sum);
    printf("%lld\n",a);
    return 0;
}