#include<stdio.h>
int main(){
    float x = 3.14159285;
    float r =  7;
    float v = 4*x*r*r*r/3;
    printf("Radius = ");
    printf("%f\n", r);
    printf("Volume of Sphere = ");
    printf("%f", v);
    return 0;
}