#include<stdio.h>
int main(){
    int y;
    printf("Enter number for lines : ");
    scanf("%d",&y);
    for (int i = 1; i <=y; i++)
    {
        if (i%2==0)
        {
            for (int j = 65; j <=64+i; j++)
            {
            printf("%c ",j);
            }
        }
        else{
            for (int j = 1; j <=i; j++)
        {
            printf("%d ",j);
        }
        }
        
        printf("\n");
    }
    
    return 0;
}