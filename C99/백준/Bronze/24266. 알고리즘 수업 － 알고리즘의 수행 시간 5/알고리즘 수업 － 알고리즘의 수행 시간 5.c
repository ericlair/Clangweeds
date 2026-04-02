#include <stdio.h>

int main(void){
    long long n;

    scanf("%lld", &n);

    long long count = n*n*n;
    int degree = 3;

    printf("%lld\n%d", count, degree);

    return 0;
}