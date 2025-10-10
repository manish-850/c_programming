#include<stdio.h>
int main(){
    int x,y;
    printf("Enter number for lines : ");
    scanf("%d",&y);
    for (int i = 1; i <=y; i++)
    {
        for (int j = 1; j <=(y+1)-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}