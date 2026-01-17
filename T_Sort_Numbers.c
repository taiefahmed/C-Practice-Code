#include<stdio.h>
int main()
{
     int a,b,c,A,B,C;
     scanf("%d %d %d",&a,&b,&c);
     A=a;
     B=b;
     C=c;
  
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp =b;
        b= c;
        c = temp;
    }
    printf("%d\n%d\n%d\n", a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n", A,B,C);
    return 0;

}