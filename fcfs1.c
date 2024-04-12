#include <stdio.h>
int main()
{
    int n;
    int arr[10];
    int tm[10];
    int disk;
    int sum = 0;
    printf("Enter elemens:");
    scanf("%d", &n);
    printf("Enter disk:");
    scanf("%d", &disk);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        tm[i] = disk - arr[i];
        if (tm[i] < 0)
        {
            tm[i] = arr[i] - disk;
        }
        disk = arr[i];
        sum = sum + tm[i];
    }
    printf("total head movement=%d", sum);
}
