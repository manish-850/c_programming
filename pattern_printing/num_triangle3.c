#include<stdio.h>
int main(){
    int n;
    printf("Enter number for lines : ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {   int a=i;
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}