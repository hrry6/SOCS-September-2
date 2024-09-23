#include <stdio.h>

int main()
{
    float a,b,c,d,e,f,g,h,i,j,k,l;

    scanf("%f %f %f %f", &a,&b,&c,&d);
    scanf("%f %f %f %f", &e,&f,&g,&h);
    scanf("%f %f %f %f", &i,&j,&k,&l);

    printf("%.2f\n", (2*a) + (2*b) + (2*c) + d);
    printf("%.2f\n", (2*e) + (2*f) + (2*g) + h);
    printf("%.2f\n", (2*i) + (2*j) + (2*k) + l);


    return 0;
}