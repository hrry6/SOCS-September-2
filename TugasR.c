#include <stdio.h>

int main()
{
    long long a,b,c,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12;

    scanf("(%lld+%lld)x(%lld-%lld)", &v1,&v2,&v3,&v4);
    getchar();
    scanf("(%lld+%lld)x(%lld-%lld)", &v5,&v6,&v7,&v8);
    getchar();
    scanf("(%lld+%lld)x(%lld-%lld)", &v9,&v10,&v11,&v12);

    printf("%lld %lld %lld\n", (v1 + v2) * (v3 - v4), (v5 + v6) * (v7 - v8),(v9 + v10) * (v11 - v12) );

    return 0;
}