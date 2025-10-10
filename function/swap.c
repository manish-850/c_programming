#include<stdio.h>
int main(){
    int a,b,c,d;
    d=a;
    c=b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    a=b;
    c=d;
    printf("New Value of a is %d\nNew value of b is %d",a,c);
    return 0;
}