#include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=0;
    if (n<=0)
    {
        printf("%d is neither prime nor composite number.");
    }
    
    for (int i = 2;i <= (n-1) ; i++)
    {
        int p = n%i;
        // This is wrong logic.
        // if (p==0)
        // {
        //     printf("%d is a composite number",n);
        //     break;
        // }
        // else
        // {
        //     printf("%d is a prime number",n);
        //     break;
        // }
        if (p==0)
        {
            a=1;
            break;
        }
    }
    if (a==0)
    {
       printf("%d is a prime number",n);
    }
    if (a==1)
    {
       printf("%d is a composite number",n);
    }
    
    
    
   return 0; 
}