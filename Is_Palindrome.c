#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]){
    int sz=strlen(s);
    int l=0;
    int r=sz-1;
    int f=1;
    for(l=0;l<r;l++)
    {
        if(s[l] != s[r])
        {
            f=0;
            break;
        }
        r--;
    }
    if(f==1){
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char s[1001];
    scanf("%s",s);

    int c= is_palindrome(s);
    if (c==1)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}