#include <stdio.h>

int main()
{
    float a, b, c, total; 

    scanf("%f %f %f", &a,&b,&c);
    total = (a *0.2) + (b*0.3) + (c*0.5); 
    printf("%.2f\n", total); 


    return 0;
}
