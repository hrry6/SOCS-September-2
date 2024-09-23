#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("%d\n", (a / 10) % 10);
    printf("%d\n", (b / 10) % 10);
    printf("%d\n", (c / 10) % 10);
    
    return 0;
}