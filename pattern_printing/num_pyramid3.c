#include <stdio.h>
int main()
{
    int n, x;
    printf("Enter number : ");
    scanf("%d", &n);
    x = n / 2 + 1;
    int nsp=1;
    for (int i = 1; i <=x; i++)
    {
        int p=x-i;
        // for (int i = 1; i <=1; i++)
        // {
        //     /* code */
        // }
        for (int k = 1; k <=p; k++)
        {
            printf("%d",k);
        }
        for (int l = 1; l<=nsp; i++)
        {
            printf(" ");
            nsp = nsp+2;
        }
        for (int m = 1; m <=p; m++)
        {
            printf("%d",p);
            p=p-1;
        }
        
        
       printf("\n"); 
    }
    
    return 0;
}