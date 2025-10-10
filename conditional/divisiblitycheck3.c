#include <stdio.h>
int main()
{
    int n;
    printf("Enter NO. : ");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 5 == 0)
    {
        if (n % 15 != 0)
        {
            printf("%d is divisible by 5 or 3 but not by 15.", n);
        }
    }
    else{
       printf("%d is not divisible 15.", n); 
    }
    // if (n%3==0)
    // {
    //     if (n%5!=0)
    //     {
    //         printf("%d is divisible by 5 or 3 but not by 15.",n);
    //     }
    // }
    return 0;
}