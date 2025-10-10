#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int r=0;
    int og =n;
    while (n!=0)
    {
        r =10*r;
        r=r+(n%10);
        n=n/10;
    }
    int s =og+r;
    printf("The sum of number and its reverse is %d",s);
    return 0;
}