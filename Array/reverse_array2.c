#include <stdio.h>
int main(){
    int arr[7] = {23, 43, 76, 24, 56, 67, 89};
    for (int i = 0; i < 3; i++) {
        int temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
    for (int i = 0; i <=6; i++) printf("%d ",arr[i]);
    return 0;
}