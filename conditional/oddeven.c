#include<stdio.h>
int main(){
    int x;
    printf("Enter the NO. : ");
    scanf("%d", &x);
    if (x%2==0)
    {
        printf("%d is Even NO.",x);
    }
    // if (x%2!=0)
    // {
    //     printf("Entered NO. is Odd ");
    // }
    else
    {
       printf("%d is Odd NO.",x); 
    }
    
    return 0;
}