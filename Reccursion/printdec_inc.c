#include <stdio.h>
void counting(int n)
{
    if (n==0) return;
    printf("%d\n",n);
    counting(n-1);
    printf("%d\n",n);  
}
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    counting(n);
}