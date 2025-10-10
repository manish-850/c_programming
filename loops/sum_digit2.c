#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int sum=0,m;
    while (n!=0)
    {
        m=n%10;
        n=n/10;
        if (m%2==0)
        {
            sum = sum+m;
        }
        
    }
   printf("%d", sum);
}