#include<stdio.h>
int main(){
    float radius;
    printf("radius : ");
    scanf("%f",&radius);
    float pi = 3.14159285;
    float area = pi*radius*radius;
    printf("Area of Circle : ");
    printf("%f", area);
    return 0;
}