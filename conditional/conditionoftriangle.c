#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter length of 1st side : ");
    scanf("%d", &x);
    printf("Enter length of 2nd side : ");
    scanf("%d", &y);
    printf("Enter length of 3rd side : ");
    scanf("%d", &z);
    if (x < (y + z) && y < (x + z) && z < (x + y))
    {
        printf("Sides %d, %d and %d can form a triangle.", x, y, z);
    }
    else
    {
        printf("Sides %d, %d and %d cannot form a triangle.", x, y, z);
    }
    return 0;
}