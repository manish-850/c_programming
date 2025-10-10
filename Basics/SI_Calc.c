#include<stdio.h>
int main(){
    float Pricipal;
    float Rate;
    float Time;
    printf("Enter Principal : ");
    scanf("%f", &Pricipal);
    printf("Enter Rate : ");
    scanf("%f", &Rate);
    printf("Enter Time : ");
    scanf("%f", &Time);
    float SI;
    SI = (Pricipal*Rate*Time)/100;
    printf("Your SI is : ");
    printf("%f", SI);
    return 0;
}