#include <stdio.h>
int main(){
    float x1 = 80 ; // Enlish Marks
    float x2 = 67 ; // Science Marks
    float x3 = 90 ; // Maths Marks
    float x4 = 87 ; // Social Science Marks
    float x5 = 95 ; // Hindi Marks
    float x6 = x1 + x2 + x3 + x4 + x5;
    float x7 = x6/5;
    printf("Enlish : ");
    printf("%f",x1);
    printf("\nScience : ");
    printf("%f",x2);
    printf("\nMaths : ");
    printf("%f",x3);
    printf("\nSocial Science : ");
    printf("%f",x4);
    printf("\nHindi : ");
    printf("%f",x5);
    printf("\nPercentage : ");
    printf("%f",x7);
    return 0;
}