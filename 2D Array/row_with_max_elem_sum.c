#include <stdio.h>
#include <limits.h>
int main()
{
    int a, b;
    printf("Enter number of rows : ");
    scanf("%d", &a);
    printf("Enter number of column : ");
    scanf("%d", &b);
    int arr[a][b];
    int sum = 0;
    int maxrow[a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
        maxrow[i] = sum;
        sum = 0;
    }
    int max = INT_MIN;
    int x = 0;
    for (int i = 0; i < a; i++)
    {
        if (max < maxrow[i])
        {
            max = maxrow[i];
            x = i;
        }
    }
    printf("The row which have maximum element sum is %d\n", x + 1);
    return 0;
}