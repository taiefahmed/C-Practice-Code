#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
    printf("the even number : ");
  int odd;
   for(int i=0;i<5;i++)
   {
     if (arr[i]%2!=0)
     {
       odd=arr[i];
     }
   }
   printf("%d",odd);
    return 0;
}
