#include <stdio.h>
int main()
{
    int a,r,n;
    printf("Enter first term of GP : ");
    scanf("%d", &a);
    printf("Enter common ratio : ");
    scanf("%d", &r);
    printf("Enter number of term : ");
    scanf("%d", &n);
    int p = 1;
    for (int i = 1; i <= n; i = i + 1)
        {
        printf("%d ", p);
        p = r * p;
        }

    return 0;
}