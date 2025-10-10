#include<stdio.h>
int stair(int n){
    if (n<=2) return n;
    if (n==3) return 4;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The number of ways is %d",stair(n));
    return 0;
}