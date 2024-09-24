#include <stdio.h>

int main()
{
    double l,b,h, sisiSegitiga, sisiMiring, sisiAlas;

    scanf("%lf %lf %lf", &l,&b,&h);

	double area = (b*h) + (3*b*l);

    printf("%.3lf\n", area);

    return 0;
}
