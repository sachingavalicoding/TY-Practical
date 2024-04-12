#include <stdio.h>
int main()
{
    int disk = 50;
    int n = 8;
    int arr[10] = {};
    int tm[10];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {

        tm[i] = disk - arr[i];
        if (tm[i] < 0)
        {
            tm[i] = arr[i] - disk;
        }
        disk = arr[i];
        sum += tm[i];
    }
    printf("\n Total Head Movement =   %d", sum);
}