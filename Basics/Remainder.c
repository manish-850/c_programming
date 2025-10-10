#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the Dividend : ");
    scanf("%d", &a);
    printf("Enter the Divisor : ");
    scanf("%d", &b);
    int c = a/b;
    int d = a-(b*c);
    printf("Remainder is :");
    printf("%d",d);
    return 0;
}