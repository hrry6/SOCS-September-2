#include <stdio.h>

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    printf("%.2f%\n", (float) a/b * 100);
    return 0;
}