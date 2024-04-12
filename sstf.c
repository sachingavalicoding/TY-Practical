#include <stdio.h>
#include <stdlib.h>
int main()
{
    int disk = 50;
    int n = 8;
    int arr[10] = {95, 180, 34, 119, 11, 123, 62, 64};
    int visited[10];
    int sum = 0;
    int min = 50;
    int new = 50;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        new = abs(arr[i] - disk);
        if (min > new)
        {
            min = new;
        }
    }
    printf("\n %d ", min);
}