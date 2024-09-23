#include <stdio.h>

int main()
{
    double a,b,c,d,e,f,g;

    scanf("%lf", &g);
    scanf("%lf %lf", &a,&b);
    scanf("%lf %lf", &c,&d);
    scanf("%lf %lf", &e,&f);

    printf("%.2lf\n", (a * b) / 100 );
    printf("%.2lf\n", (c * d) / 100 );
    printf("%.2lf\n", (e * f) / 100 );

    return 0;
}