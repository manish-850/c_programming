#include<stdio.h>
int main(){
    int n;
    printf("Enter NO. : ");
    scanf("%d", &n);
    if (n%5==0 && n%15!=0)
    {
        printf("%d is divisible by 5.",n);
    }
    if (n%3==0 && n%15!=0)
    {
        printf("%d is divisible by 3.",n);
    }
    if (n%15==0)
    {
        printf("%d is divisible by both 3 and 5.",n);
    }
    if(n%5!=0 && n%3!=0){
      printf("%d is divisible by neither 3 nor 5.",n);  
    }
    return 0;  
}