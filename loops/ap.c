#include<stdio.h>
int main()
{
    int a,d,n;
    printf("Enter first term of AP : ");
    scanf("%d", &a);
    printf("Enter common difference : ");
    scanf("%d", &d);
    printf("Enter number of terms : ");
    scanf("%d", &n);
    int last = a+(n-1)*d;
    for (int i = a; i <= last; i = i + d)
    {
        printf("%d ",i);
    }
    return 0;
}