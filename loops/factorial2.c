#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    // 1

    // int p=0;
    // while (p<=n)
    // {
    //     int f=1, i=1;
    //     while (i<=p)
    //     {
    //         f = f*i;
    //         i = i+1;
    //     }
    //     printf("%d ",f);
    //     p=p+1; 
        
    // }

    // 2

    int f =1;
    for (int i = 0; i <=n; i++)
    {
       printf("%d ",f);
       f = f*(i+1);
    }
    
    // return 0;
}