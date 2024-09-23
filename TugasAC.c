#include<stdio.h>
int main(){
    int N;
    long long p;
    scanf("%d", &N);
    p = (1LL << N) - 1;
    printf("%.lld\n", p);

    return 0;
}