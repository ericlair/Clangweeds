#include <stdio.h>

int main(void){
    long long N;
    scanf("%lld", &N);
    
    long long result =  (N*(N-1)*(N-2))/6;
    int degree = 3;

    printf("%lld\n%d", result, degree);

    return 0;
}