#include <stdio.h>
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++) factorial = factorial * i;
    return factorial;
}
int maze(int n, int m)
{
    int totalways = fact(n + m - 2) / (fact(n - 1) * fact(m - 1));
    return totalways;
}
int main()
{
    int n, m;
    printf("Enter the rows : ");
    scanf("%d", &n);
    printf("Enter the column : ");
    scanf("%d", &m);
    printf("The number of ways are %d", maze(n, m));
    return 0;
}