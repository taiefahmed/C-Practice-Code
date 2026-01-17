#include<stdio.h>
int main()
{
     int n;
     char c[101];
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
        scanf("%s",&c);   
        int sz =strlen(c);
        int n_sz=sz-2;
        if (sz>10)
        {
            printf("%c%d%c\n",c[0],n_sz,c[sz-1]);
        }
        else{
            printf("%s\n",c);
        }
     }
    return 0;

}