#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxidx = 0;
    int minidx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[maxidx])
        {
            maxidx = i;
        }
        if (arr[i] < arr[minidx])
        {
            minidx = i;
        }
    }
    int temp = arr[minidx];
    arr[minidx] = arr[maxidx];
    arr[maxidx] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}