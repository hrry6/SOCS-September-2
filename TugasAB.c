#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    long long total = 100 * a;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < i;j++)
        {
            total = total + 50;
        }
    }

    printf("%lld\n", total);
    return 0;
}