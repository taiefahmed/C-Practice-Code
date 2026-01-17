// //pattern.........................
// #include<stdio.h>
// int main()
// {
//      int n;
//      scanf("%d",&n);

//      int str=1,spc=n-1;
//      for(int i=1;i<=n;i++)
//      {
//         for(int i=1;i<=spc;i++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=str;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//         str++;
//         spc--;
//      }
//     return 0;
}

// Sum of 2 values equal X ......................
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int a, flag = 0;
//     scanf("%d", &a);
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {

//             if (arr[i] + arr[j] == a)
//             {
//                 flag = 1;
//                 printf("YES\n");
//             }
//         }
//     }
//     if (flag==0)
//     {
//         flag = 1;
//         printf("NO\n");
//     }

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//      int n=5;

//      int num=1,spc=n;
//      for(int i=1;i<=n;i++)
//      {
//         for(int j=1;j<=spc;j++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++)
//         {
//             printf("* ");
//         }
//        printf("\n");
//        num++;
//        spc--;
//     }
//     return 0;

// }