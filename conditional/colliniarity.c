#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("Enter coordinate of first point : ");
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinate of second point : ");
    scanf("%f %f",&x2,&y2);
    printf("Enter coordinate of third point : ");
    scanf("%f %f",&x3,&y3);
    float m1 = (y2-y1)/(x2-x1);
    float m2 = (y3-y2)/(x3-x2);
    if (m1==m2)
    {
        printf("All point lies on same line.");
    }
    else{
       printf("All point does not lie on same line."); 
    }
    
    return 0;
}