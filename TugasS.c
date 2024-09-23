#include <stdio.h>
#include <math.h>

int main()
{

    double l,b,h, sisiSegitiga, sisiMiring, sisiAlas;

    scanf("%fl %fl %fl", &l,&b,&h);

    sisiSegitiga = b * h;
    sisiMiring = 2 * (sqrt(pow((1/2 * b), 2) + pow(h, 2)) * l);
    sisiAlas = b * l;

    printf("%fl\n", sisiAlas + sisiMiring + sisiSegitiga);

    return 0;
}