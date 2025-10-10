#include<stdio.h>
int main(){
    int x;
    printf("Enter the Year :  ");
    scanf("%d",&x);
    if (x%4==0)
    {
        printf("%d is a Leap Year.",x);
    }
    else{
        printf("%d is not a Leap Year.",x);
    }
    return 0;
}