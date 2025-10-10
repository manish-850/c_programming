#include <stdio.h>
void counting(int x,int n)
{
    if (x>n) return;
    printf("%d\n",x);
    x++;
    counting(x,n);
    
}
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    counting(1,n);
}