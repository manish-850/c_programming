#include <stdio.h>
int main()
{
    int n, x;
    printf("Enter odd number : ");
    scanf("%d", &n);

    // 1

    // x=n/2+1;
    // if (n%2!=0)
    // {
    //     for (int i = 1; i <=x; i++)
    // {
    //     for (int j = 1; j <=x-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <=2*i-1; k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for (int l = 1; l <=x-1; l++)
    // {
    //     for (int m = 1; m <=l; m++)
    //     {
    //         printf(" ");
    //     }
    //     for (int o = 1; o<=n-(2*l); o++)
    //     {
    //         printf("*");
    //     }

    //     printf("\n");
    // }
    // }
    // else{
    //     printf("Enter only odd number");
    // }

    //  2

    // if (n%2!=0)
    // {
    //     x=(n+1)/2;
    // for (int i = 1; i<= n; i++)
    // {
    //     int a=i;
    //     if (i<=x)
    //     {
    //         for (int j = 1; j <=x-i; j++)
    //         {
    //             printf(" ");
    //         }
    //         for (int k = 1; k <= 2*i-1; k++)
    //         {
    //             printf("*");
    //         }

    //         printf("\n");

    //     }
    //     else{
    //         a=a-x;
    //         for (int j = 1; j <=a ; j++)
    //         {
    //             printf(" ");
    //         }
    //         for (int k = 0; k <=n-(2*a)-1; k++)
    //         {
    //             printf("*");
    //         }

    //         printf("\n");
    //     }

    // }
    // }
    // else{
    //     printf("Enter only odd number");
    // }

    // 3

    int nst = 1;
    int nsp = n / 2;
    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= nsp; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= nst; k++)
            {
                printf("*");
            }
            if (i <= n / 2)
            {
                nsp--;
                nst += 2;
            }
            else
            {
                nsp++;
                nst -= 2;
            }

            printf("\n");
        }
    }
    else
    {
        printf("Enter only odd number");
    }

    return 0;
}