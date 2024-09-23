#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    char sim1, sim2, sim3, sim4, sim5, sim6;

    scanf("%d %c %d %c", &a, &sim1, &b, &sim2);
    scanf("%d %c %d %c", &c, &sim3, &d, &sim4);
    scanf("%d %c %d %c", &e, &sim5, &f, &sim6);

    printf("%d\n", a+b);
    printf("%d\n", c+d);
    printf("%d\n", e+f);

    return 0;
}