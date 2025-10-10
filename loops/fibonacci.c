#include <stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n); 
    int a=1; 
    int b=1;
    int sum;
    if (n>=1) printf("1 ");
    if (n>=2) printf("1 ");
    for (int i = 3; i <=n; i++){
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    return 0;  
}
