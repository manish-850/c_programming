#include<stdio.h>
int main(){
    int x;
    printf("Enter NO. : ");
    scanf("%d", &x);
    if (x>99 && x<1000)
    {
        printf("%d is a three digit NO.",x);
    }
    else{
        printf("%d is not a three digit NO.",x);  
    }
    return 0; 
}