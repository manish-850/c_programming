#include<stdio.h>
void reverse(int arr[],int a, int b){
    for (int i = a,j=b; i <=j; i++,j--)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main() {
    int n,k;
    k=k%n;
    printf("Enter Size of array : ");
    scanf("%d",&n);
    int arr[n];

    // Taking array value

    for (int i = 0; i <=n-1; i++) scanf("%d",&arr[i]);

    printf("Enter number of rotation : ");
    scanf("%d",&k);
    
    // steps to reverse array

    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    // Printing array

    for (int i = 0; i <=n-1; i++) printf("%d ",arr[i]);
    return 0;
}