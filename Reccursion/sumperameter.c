#include <stdio.h>
void sum(int x, int n)
{
    if (n == 0)
    {
        printf("%d", x);
        return;
    }
    sum(x+n,n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    sum(0,n);
}