#include <stdio.h>
#include <math.h>

int main() {
    double X, Y;

    scanf("%lf %lf", &X, &Y);

    Y = Y / 100.0;

    double total = X * pow(1 + Y, 3);

    printf("%.2f\n", total);

    return 0;
}
