#include <stdio.h>
int main()
{
    int n = 5;
    int m = 3;
    int alloc[5][3] = {
        {2, 3, 2},
        {4, 0, 0},
        {5, 0, 4},
        {4, 3, 3},
        {2, 2, 4}};
    int max[5][3] = {
        {9, 7, 5},
        {5, 2, 2},
        {1, 0, 4},
        {4, 4, 4},
        {6, 5, 5}};
    int aval[] = {3, 3, 2};
    char res[] = {'A', 'B', 'C'};
    int need[5][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
        printf("\n");
    }
    printf(" \n \t Need Matrix \n");
    for (int i = 0; i < 3; i++)
    {
        printf("  \t %c", res[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d ", i);
        for (int j = 0; j < m; j++)
        {
            printf(" \t %d", need[i][j]);
        }
        printf("\n ");
    }
 printf("\n ");

  printf(" \n \t Max Matrix \n");
    for (int i = 0; i < 3; i++)
    {
        printf("  \t %c", res[i]);
    }
 printf("\n ");
   
    for (int i = 0; i < n; i++)
    {
        printf("P%d ", i);
        for (int j = 0; j < m; j++)
        {
            printf(" \t %d", max[i][j]);
        }
        printf("\n ");
    }
     printf("\n ");

       printf("\n \t Alloc Matrix \n");
    for (int i = 0; i < 3; i++)
    {
        printf("  \t %c", res[i]);
    }

   printf("\n ");
    for (int i = 0; i < n; i++)
    {
        printf("P%d ", i);
        for (int j = 0; j < m; j++)
        {
            printf(" \t %d", alloc[i][j]);
        }
        printf("\n ");
    }
    // for(int i = 0; i < 3; i++){
    //         printf("  \t %d" , aval[i]);
    // }
}
