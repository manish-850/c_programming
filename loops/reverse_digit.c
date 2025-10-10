#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int m;
    printf("The reverse number is : ");
    while (n!=0)
    {
        m=n%10;
        n=n/10;
        printf("%d", m);
    }
}