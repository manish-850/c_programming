#include <stdio.h>
int main(){
    int a,b;
    printf("Enter base : ");
    scanf("%d", &a);
    printf("Enter power : ");
    scanf("%d", &b);
    int p=1;

    for (int i = 1; i <=b; i++)
    {
        p=p *a;
    }
    printf("%d raised to the power %d is %d.",a,b,p);
    return 0;
}
// to print each number

// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter base : ");
//     scanf("%d", &a);
//     printf("Enter power : ");
//     scanf("%d", &b);
//     int p=a;
//     printf("%d ",p);
//     for (int i = 2; i <=b; i++)
//     {
//         p=p *a;
//         printf("%d ",p);
//     }
//     return 0;
// }