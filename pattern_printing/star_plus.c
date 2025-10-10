#include<stdio.h>
int main(){
    int n;
    printf("Enter odd number : ");
    scanf("%d",&n);
    if (n%2!=0){

        // 1st

        // for (int i = 1; i <=n; i++){
        // if (i==(n+1)/2){
        //     for (int j = 1; j <=n; j++){
        //         printf("*");
        //     }
            
        // }
        // else{
        //     for (int k = 1; k<=n; k++)
        //     {
        //         if (k==(n+1)/2)
        //         {
        //           printf("*");  
        //         }
        //         else{
        //           printf(" ");  
        //         }
        //     }
            
            
        // }
        // printf("\n");
        // }

        // 2nd

        
        for (int i = 1; i <=n; i++)
           {
            for (int j = 1; j <=n; j++)
            {
                if (i==(n+1)/2||j==(n+1)/2)
                {
                    printf("*");
                }
                else{
                    printf(" ");   
                }
                
            }
            
           }
    }
    else{
        printf("Enter a odd number");
    }
    
    
    return 0;
}