#include <stdio.h>

int main()
{
    int a, total;

    scanf("%d", &a);
    
    total = 1;

    for(int i = 0; i<a;i++)
    {
        total = total * 2;
    }

    printf("%d\n", total - 1);
    return 0;
}