#include <stdio.h>

int main()
{
    int a,b,c,result;

    scanf("%d %d", &a,&b);

    while(c<=b)
    {
        printf("%d\n", a);
        a++;
        c++;
    }

    return 0;
}