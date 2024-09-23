#include <stdio.h>

int main() {
    float a,b,c,d,e,f,g,h;
    scanf("%f %f", &a,&b);
    scanf("%f %f", &c,&d);
    scanf("%f %f", &e,&f);
    scanf("%f %f", &g,&h);

    printf("$%.2f\n", b / (1 - (a / 100.0)));
    printf("$%.2f\n", d / (1 - (c / 100.0)));
    printf("$%.2f\n", f / (1 - (e / 100.0)));
    printf("$%.2f\n", h / (1 - (g / 100.0)));


    return 0;
}