#include<stdio.h>
int main() {
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of column : ");
    scanf("%d",&m);
    int arr[n][m];
    int es=0;
    for (int i = 0; i <n; i++){
        for (int j = 0; j <m; j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for (int i = 0; i <n; i++){
        for (int j = 0; j <m; j++){
            es=es+arr[i][j];
        }
    }
    printf("The sum of element of matrix is %d",es);
    return 0;
}
