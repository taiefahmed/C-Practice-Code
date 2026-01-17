#include<stdio.h>
#include<string.h>
int main()
{
     char a[11],b[11];
     scanf(" %s",&a);
     scanf(" %s ",&b);

     int sz1=strlen(a);
     int sz2=strlen(b);

     printf("%d %d\n",sz1,sz2);
     
     printf("%s%s\n",a,b);
     if(a[0]!=b[0])
     {
        char tem=a[0];
         a[0]=b[0];
          b[0]=tem;
     }
     printf("%s %s",a,b);
    return 0;

}