#include <stdio.h>
int main()
{
    int n;
    printf("Enter number term of series : "); // series : 1-2+3-4....
    scanf("%d", &n);
    //  1
    // if (n%2==0)
    // {
    //     int s1 = -(n/2);
    //     printf("Sum of this series is %d",s1);
    // }
    // if (n%2!=0)
    // {
    //     int s2 = (n+1)/2;
    //     printf("Sum of this series is %d",s2);
    // }
    // alternative
    int sum = 0, i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
        i = i + 1;
    }
    printf("Sum of this series is %d", sum);
    return 0;
}