#include <stdio.h>
int main()
{
    int h = 65;
    for (int i = 1; i <= 26; i++)
    {   // 1
        // printf("%c : ", h);
        // printf("%d\n", h);
        // h = h + 1;

        // 2
        char ch = (char)h;
        printf("%c : ", ch);
        printf("%d\n", h);
        h = h + 1;
    }

    return 0;
}