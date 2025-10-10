#include<stdio.h>
int main(){
    int x;
    printf("Enter Lenght : ");
    scanf("%d",&x);
    int y;
    printf("Enter breath : ");
    scanf("%d",&y);
    int p = 2*(x + y);
    int a = x*y;
    printf("Area : %d\n",a);
    printf("Perimeter : %d\n",p);
    if (a>p)
    {
        printf("Area of rectangle is greater than its perimeter.");
    }
    if (p>a)
    {
        printf("Area of rectangle is lesser than its perimeter.");
    }
    else{
        printf("Area of rectangle is equal to its perimeter.");
    }
    
    return 0;
}