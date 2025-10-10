#include<stdio.h>
int main(){
    int n;
    printf("Enter number for lines : ");
    scanf("%d",&n);

    // 1st

    // for (int i = 1; i <=n; i++)
    // {   
    //     for (int j = 1; j <=i; j++)
    //     {
    //         if (j%2==0&&i%2!=0)
    //         {
    //             printf("0");
    //         }
    //         if (j%2!=0&&i%2!=0)
    //         {
    //             printf("1");
    //         }
    //         if (j%2!=0&&i%2==0)
    //         {
    //             printf("0");
    //         }
    //         if (j%2==0&&i%2==0)
    //         {
    //             printf("1");
    //         }
    //     }
    //     printf("\n");
    // }

    // 2nd

    for (int i = 1; i <=n; i++){   
        for (int j = 1; j <=i; j++){
           if (i%2!=0){
                if (j%2==0) printf("0 ");
                else printf("1 ");
            }
            else{
                if (j%2!=0) printf("0 ");
                else printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}