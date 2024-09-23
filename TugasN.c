#include <stdio.h>

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    b = a-b;

    printf("%.2f%\n", (float) b/a * 100);
    return 0;
}