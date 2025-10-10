#include<stdio.h>
int main(){
    int x,y;
    printf("Enter number for lines : ");
    scanf("%d",&y);
    printf("Enter number for character : ");
    scanf("%d",&x);
    for (int i = 1; i <=y; i++)
    {
        for (int j = 1; j <=x; j++)
        {
            printf("%d  ",j);
        }
        printf("\n");
    }
    
    return 0;
}