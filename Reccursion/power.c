#include <stdio.h>
void sum(int p, int m, int n)
{
    if (n == 0)
    {
        printf("%d", p);
        return;
    }
    sum(p*m,m,n - 1);
    return;
}
int main()
{
    int m;
    printf("Enter base : ");
    scanf("%d", &m);
    int n;
    printf("Enter power : ");
    scanf("%d", &n);
    sum(1,m,n);
}
