#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter 1st NO. : ");
    scanf("%d", &x);
    printf("Enter 2nd NO. : ");
    scanf("%d", &y);
    printf("Enter 3rd NO. : ");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("%d is greatest among entered no.", x);
    }
    if (y > x && y > z)
    {
        printf("%d is greatest among entered no.", y);
    }
    if (z > x && z > y)
    {
        printf("%d is greatest among entered no.", z);
    }
    return 0;
}