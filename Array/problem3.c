#include <stdio.h>
int main(){
    int arr[7] = {23, 43, 76, 24, 56, 67, 89};
    int se=0,so=0;
    for (int i = 0; i <= 6; i++){
        if(i%2==0) se+=arr[i];
        else so+=arr[i];
    }
    printf("%d",se-so);
    return 0;
}