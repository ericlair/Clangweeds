#include <stdio.h>

int main(void){

    long long n;
    scanf("%lld", &n);

    long long count = (n * (n - 1)) / 2;
    printf("%lld\n", count);

    int degree = 2;
    printf("%d\n", degree);

    return 0;
}

