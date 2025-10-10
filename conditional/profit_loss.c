#include<stdio.h>
int main(){
    int x;
    printf("Enter the CP : ");
    scanf("%d",&x);
    int y;
    printf("Enter the SP : ");
    scanf("%d",&y);
    int p = y - x;
    int l = x - y;
    if (y>x)
    {
        printf("Seller has made profit of %d.", p);
    }
    if (x>y)
    {
        printf("Seller has made loss of %d.", l);
    }
    else{
        printf("Seller has made no profit or loss.");
    }
    
    return 0;
}