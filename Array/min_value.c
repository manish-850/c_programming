#include <stdio.h>
int main()
{
    int arr[7] = {50, 43, 76, 24, 56, 67, 89};
    int min = arr[0];
    for (int i = 1; i <= 6; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("%d", min);
    return 0;
}