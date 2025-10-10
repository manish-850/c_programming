#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 0, x;
    printf("Enter number : ");
    scanf("%d", &x);
    for (int i = 0; i <= 6; i++){
        for (int j = i + 1; j <= 6; j++){
            if ( arr[i] + arr[j] == x){
                printf("(%d,%d)\n", arr[i], arr[j]);
                n++;
            }
        }
    }
    printf("The number of pair is %d.", n);
    return 0;
}