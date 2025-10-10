#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int i;
    for (i = 0; n!=0; i++)
        n=n/10;
   printf("There are %d digits in the number.",i); 
}