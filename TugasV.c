#include <stdio.h>

int main()
{
    float a,b,c,d;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    printf("%.2f %.2f %.2f\n", (4 * b) /5, ((9 * b)/5 + 32),b + 273);
    printf("%.2f %.2f %.2f\n", (4 * c) /5, ((9 * c)/5 + 32),c + 273);
    printf("%.2f %.2f %.2f\n", (4 * d) /5, ((9 * d)/5 + 32),d + 273);
    
    return 0;
}