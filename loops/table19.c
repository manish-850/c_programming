#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    // for (int i = 1; i <= 10; i = i + 1)
    // {
    //    int p = n*i;
    //     printf("%d\n",p);
    // }
    for (int i = n; i <= n*10; i = i + n)
    {
        printf("%d\n",i);
    }
    return 0;
}