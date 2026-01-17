#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        int drr[a],arr[a], crr[a];
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &drr[j]);
            arr[j]=drr[j];
        }
        for (int j = 0; j < a-1; j++)
        {
            for (int k = j+1; k < a ; k++)
            {
                if (arr[j] > arr[k])
                {
                    int temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
            }
        }
        for (int j = 0; j < a; j++)
        {
            crr[j] = drr[j] - arr[j];
            int x = abs(crr[j]);
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}