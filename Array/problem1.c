#include <stdio.h>
int main(){
    
    int arr[7] = {23, 43, 76, 24, 56, 67, 89};
    for (int i = 0; i <= 6; i++)
    {
       if (i%2==0) arr[i]=arr[i]+10;
       else arr[i]=arr[i]*2;
    }
    printf("%d %d %d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6]);
    return 0;
}