#include<stdio.h>
int main(){
    float x;
    printf("Enter the Decimal NO : ");
    scanf("%f",&x);
    int y;
    y = x;
    float z = x - y;
    printf("The fractional Part of Above NO. is : %f",z);
    return 0;
}