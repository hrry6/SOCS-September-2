#include <stdio.h>

int main()
{
    float a,b,c,d,e,f,g,h,i,j,k,l, m;

    scanf("%f", &m);
    scanf("%f %f %f %f", &a,&b,&c,&d);
    scanf("%f %f %f %f", &e,&f,&g,&h);
    scanf("%f %f %f %f", &i,&j,&k,&l);

    printf("%.2f\n", (2*a) + (2*b) + (4*c) / 3 + d / 2);
    printf("%.2f\n", (2*e) + (2*f) + (4*g) / 3 + h / 2);
    printf("%.2f\n", (2*i) + (2*j) + (4*k) / 3 + l / 2);


    return 0;
}