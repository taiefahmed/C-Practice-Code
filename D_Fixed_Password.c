#include<stdio.h>
int main()
{
    for (int i=0;i>=0;i++)
    {
        scanf("%d",&i);
        if(i==1999)
        {
            break;
        }
        else
        {
            printf("Wrong\n");
        }

    }
    printf("Correct\n");
    return 0;
}