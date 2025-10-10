#include <stdio.h>
int main(){
    int arr[7] = {23, 43, 76, 24, 56, 67, 89};
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    int n=0;
    for (int i = 0; i <= 6; i++) if (x<arr[i]) n++;
    printf("%d",n);
    return 0;
}