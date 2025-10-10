#include <stdio.h>
int palindrome(int arr[]){
    for (int i = 0; i <=6; i++) if(arr[i]==arr[6-i]);
    return printf("\nThe array is a palindrome.");
}
int main(){
    int arr[7] = {1,2,3,4,3,2,1};
    for (int i = 0; i <=6; i++) printf("%d ", arr[i]);
    palindrome(arr);
    return 0;
}
