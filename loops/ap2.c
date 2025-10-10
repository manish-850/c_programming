#include<stdio.h>
int main(){
    int a;
    printf("Enter first term of AP : ");
    scanf("%d",&a);
    int d;
    printf("Enter common difference of AP : ");
    scanf("%d",&d);

        //  my code
    for (int i = 1; a>0; i++)
    {
        printf("%d ",a);
        a = a+d;
    }
    
   return 0; 
}