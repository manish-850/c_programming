#include <stdio.h>
int main()
{
    int arr[7] = {23, 43, 76, 24, 56, 67, 89};
    int max = arr[0];
    for (int i = 1; i <= 6; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d", max);
    return 0;
}