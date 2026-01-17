#include <stdio.h>


//return + parameter............
// int num(int n)
// {
//     if(n%2==0)
//     {
//         printf("even number");
//     }
//     else{
//         printf("odd number");
//     }
//     return n;
// }


//return + no parameter............
// int dum()
// {
//     int n;
//     scanf("%d",&n);
//     if(n%2==0)
//     {
//         printf("even number");
//     }
//     else{
//         printf("odd number");
//     }
//     return n; 
// }

//no return +  parameter............
// void num(int n)
// {
//     if(n%2==0)
//     {
//         printf("even number");
//     }
//     else{
//         printf("odd number");
//     }
// }
void num()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("even number");
    }
    else{
        printf("odd number");
    }
}
int main()
{
   
    num();
    return 0;
}
