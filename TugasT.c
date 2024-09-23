#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j;

    scanf("MATH6025 %d:20-%d:00 ", &a,&b);
    scanf("MATH6025 %d:20-%d:00 ", &c,&d);
    scanf("COMP6047 %d:20-%d:00 ", &e,&f);
    scanf("COMP6047 %d:20-%d:00 ", &g,&h);
    scanf("CHAR6013 %d:20-%d:00", &i,&j);

    printf("MATH6025 %d:20-%d:00\n", ++a,++b);
    printf("MATH6025 %d:20-%d:00\n", ++c,++d);
    printf("COMP6047 %d:20-%d:00\n", ++e,++f);
    printf("COMP6047 %d:20-%d:00\n", ++g,++h);
    printf("CHAR6013 %d:20-%d:00\n", ++i,++j);

    return 0;
}