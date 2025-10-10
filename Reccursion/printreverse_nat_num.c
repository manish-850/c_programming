#include <stdio.h>
int revc(int n)
{
    printf("%d\n", n);
    if (n == 1)
        return 1;
    return revc(n - 1);
}
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int revcounting = revc(n);
}