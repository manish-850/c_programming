#include <stdio.h>
int main()
{
    int n, x;
    printf("Enter number : ");
    scanf("%d", &n);
    x = n / 2 + 1;
    int nst = n / 2;
    int nsp = 1;
    for (int i = 1; i <= x; i++)
    {
        if (i == 1)
            for (int j = 1; j <= n; j++)
                printf("*");
        else
        {
            for (int k = 1; k <= nst; k++)
                printf("*");
            for (int l = 1; l <= nsp; l++)
                printf(" ");
            for (int m = 1; m <= nst; m++)
                printf("*");
            nst = nst - 1;
            nsp = nsp + 2;
        }
        printf("\n");
    }

    return 0;
}