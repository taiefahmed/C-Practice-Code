#include <stdio.h>

void value(int *n,int *m)
{
     int temp=*n;
     *n=*m;
     *m=temp;
}

int main()
{
      int n,m;
      scanf("%d %d",&n,&m);
      value(&n,&m);
      printf("%d %d",n,m);
   
    return 0;
}