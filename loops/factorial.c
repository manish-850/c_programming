#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int f=1, i=1;
    while (i<=n)
    {
        f = f*i;
        i = i+1;
    }
    
    printf("The factorial of %d! is %d : ",n,f);
    return 0;
}