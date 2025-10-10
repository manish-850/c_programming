#include <stdio.h>
int main()
{
    int n, x, a, b, min;
    printf("Enter number : ");
    scanf("%d", &n);
    x = 2 * n - 1;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (i <= n)
                a = i;
            else
                a = 2*n - i;
            if (j <= n)
                b = j;
            else
                b = 2*n - j;
            if (a <= b)
                min = a;
            else
                min = b;
            printf("%d", (n+1)-min);
        }
        printf("\n");
    }

    return 0;
}