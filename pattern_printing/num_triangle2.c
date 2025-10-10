#include<stdio.h>
int main(){
    int y;
    // printf("Enter number for lines : ");
    scanf("%d",&y);
    for (int i = 1; i <=y; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            int t=2*j-1;
            printf("%d ",t);
        }
        printf("\n");
    }
    
    return 0;
}